/***********************************************************************
 * Header File:
 *    POSITION
 * Author:
 *    Emily Raventos and Ashlee Hart
 * Summary:
 *    The position of a piece, the cursor, or a possible move on a chess board
 ************************************************************************/

#pragma once

#include <string>
#include <cstdint>
using std::string;
using std::ostream;
using std::istream;

using namespace std;

const int SIZE_SQUARE = 32;   // number of pixels in a square by default
const int OFFSET_BOARD = 50;   // boarder between the board and the edge of screen

/***********************************************
 * DELTA
 * Movement in a direction (dRow and dCol)
 **********************************************/
struct Delta
{
   int dRow;
   int dCol;
};

const Delta ADD_R = { 1,  0 };
const Delta ADD_C = { 0,  1 };
const Delta SUB_R = { -1,  0 };
const Delta SUB_C = { 0, -1 };


class PositionTest;

/***************************************************
 * POSITION
 * The location of a piece on the board
 ***************************************************/
class Position
{
   friend class PositionTest;
public:

   // Position :    The Position class can work with other positions,
   //               Allowing for comparisions, copying, etc.
   Position(const Position& rhs) {              }
   Position() : colRow(0x99) {              }
   bool isInvalid() const { return (colRow & 0x88) != 0; }
   bool isValid()   const { return (colRow & 0x88) == 0; }
   void setValid() { colRow &= 0x7F; }
   void setInvalid() { colRow = 0xff; }
   bool operator <  (const Position& rhs) const { return this->colRow < rhs.colRow; }
   bool operator == (const Position& rhs) const { return this->colRow == rhs.colRow; }
   bool operator != (const Position& rhs) const { return this->colRow != rhs.colRow; }
   const Position& operator =  (const Position& rhs) { return this->colRow = rhs.colRow; }

   // Location : The Position class can work with locations, which
   //            are 0...63 where we start in row 0, then row 1, etc.
   Position(int location) : colRow(0x99) {        }
   int getLocation() const;
   void setLocation(int location) {           }


   // Row/Col : The position class can work with row/column,
   //           which are 0..7 and 0...7
   Position(int c, int r) : colRow(0x99) {           }
   virtual int getCol() const { return isValid() ? (int)((colRow & 0xf0) >> 4) : -1; }
   virtual int getRow() const { return isValid() ? (int)((colRow & 0x0f) >> 0) : -1; }
   void setRow(int r) { (r >= 0 && r < 8) ? colRow = (colRow & 0xf0) | (uint8_t)r : colRow = 0xff; }
   void setCol(int c) { (c >= 0 && c < 8) ? colRow = (colRow & 0x0f) | ((uint8_t)c << 4) : colRow = 0xff; }
   void set(int c, int r) {
      if (c >= 0 && c < 8 && r >= 0 && r < 8) {
         colRow = ((uint8_t)c << 4) | (uint8_t)r;
      }
      else {
         colRow = 0xff; // Invalid position
      }
   }

   // Text:    The Position class can work with textual coordinates,
   //          such as "d4"

   Position(const char* s) : colRow(0x99) {
      // Check if the string has at least two characters
      if (s && s[0] && s[1]) {
         // Extract column and row from the string
         int col = s[0] - 'a'; // Assuming lowercase letters for columns ('a' -> 0, 'b' -> 1, ..., 'h' -> 7)
         int row = s[1] - '1'; // Assuming '1' -> 0, '2' -> 1, ..., '8' -> 7

         // Check if column and row values are within valid range
         if (col >= 0 && col < 8 && row >= 0 && row < 8) {
            // Set the colRow value
            colRow = static_cast<uint8_t>((col << 4) | row);
         }
      }
   }
   const Position& operator =  (const char* rhs) { *this = Position(rhs); return *this; }
   const Position& operator =  (const string& rhs) { *this = Position(rhs.c_str()); return *this; }

   // Pixels:    The Position class can work with screen coordinates,
   //            a.k.a. Pixels, these are X and Y coordinates. Note that
   //            we need to scale them according to the size of the board.
   int getX()   const { return 99; }
   int getY()   const { return 99; }
   void setXY(double x, double y) { }
   double getSquareWidth()  const { return 99; }
   double getSquareHeight() const { return 99; }
   void setSquareWidth(double width) {  }
   void setSquareHeight(double height) {  }

   // Delta:    The Position class can work with deltas, which are
   //           offsets from a given location. This helps pieces move
   //           on the chess board.
   Position(const Position& rhs, const Delta& delta) : colRow(rhs.colRow) {
      adjustRow(delta.dRow);
      adjustCol(delta.dCol);
   }
   void adjustRow(int dRow) {
      int newRow = getRow() + dRow;
      if (newRow >= 0 && newRow < 8) {
         colRow = (colRow & 0xf0) | static_cast<uint8_t>(newRow);
      }
      else
      {
         setInvalid();
      }
   }
   void adjustCol(int dCol) {
      int newCol = getCol() + dCol;
      if (newCol >= 0 && newCol < 8) {
         colRow = (colRow & 0x0f) | (static_cast<uint8_t>(newCol) << 4);
      }
      else
      {
         setInvalid();
      }
   }
   const Position& operator += (const Delta& rhs) { adjustRow(rhs.dRow); adjustCol(rhs.dCol); return *this; }
   Position operator + (const Delta& rhs) const { Position newPos(*this); newPos += rhs; return newPos; }

private:
   void set(uint8_t colRowNew) { this->colRow = colRowNew; }

   uint8_t colRow;
   static double squareWidth;
   static double squareHeight;
};


ostream& operator << (ostream& out, const Position& pos);
istream& operator >> (istream& in, Position& pos);

