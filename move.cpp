/***********************************************************************
 * Source File:
 *    MOVE 
 * Author:
 *    <your name here>
 * Summary:
 *    Everything we need to know about a single chess move
 ************************************************************************/

#include "move.h"
#include "pieceType.h"
#include <cassert>
#include <iostream>
#include <sstream>

using namespace std;

/***************************************************
 * MOVE : DEFAULT CONSTRUCTOR
 ***************************************************/
Move::Move()
{
   source.setInvalid();
   dest.setInvalid();
}

PieceType Move::pieceTypeFromLetter(char letter) const {
   for (const auto& pair : mp) {
      if (pair.second == letter) {
         return pair.first;
      }
      else {
         return INVALID;
      }
   };
}


