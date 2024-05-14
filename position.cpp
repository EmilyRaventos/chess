/***********************************************************************
 * Source File:
 *    POSITION
 * Author:
 *    Emily Raventos and Ashlee Hart
 * Summary:
 *    The position of a piece, the cursor, or a possible move on a chess board
 ************************************************************************/

#include "position.h"
#include <iostream>

 /******************************************
  * POSITION INSERTION OPERATOR
  ******************************************/
ostream& operator << (ostream& out, const Position& rhs)
{
   out << "error";
   return out;
}

/*************************************
 * POSITION EXTRACTION OPERATOR
 **************************************/
istream& operator >> (istream& in, Position& rhs)
{
   return in;
}

int Position::getLocation() const {

   int row = (int)((colRow & 0x0f) >> 0);
   int col = (int)((colRow & 0xf0) >> 4);
   // Combine row and column into a single integer representing the location
   return (row << 3) | col;
}


