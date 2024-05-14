/***********************************************************************
 * Header File:
 *    TEST MOVE
 * Author:
 *    <your name here>
 * Summary:
 *    test the Move class
 ************************************************************************/


#include "testMove.h"
#include "move.h"
#include "pieceType.h"
#include <cassert>

 /*************************************
  * Constructor : default
  * Input:
  * Output: source=INVALID
  *         dest  =INVALID
  **************************************/
void TestMove::constructor_default()
{ // setup
   Move m;
   // validation
   assertUnit(m.source.isInvalid());
   assertUnit(m.dest.isInvalid());
}

/*************************************
 * CONSTRUCTOR : standard string move
 * Input:  e5e6
 * Output: source=4,4
 *         dest  =2,5
 *         type  =MOVE
 **************************************/
void TestMove::constructString_simple()
{
   // setup
   //Move move('e5e6');
   assertUnit(NOT_YET_IMPLEMENTED);
}


/*************************************
 * READ simple move
 * Input:  e5d6
 * Output: source=4,4
 *         dest  =4,5
 *         type  =MOVE
 **************************************/
void TestMove::read_simple()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * READ capture move
 * Input:  e5d6r
 * Output: source=4,4
 *         dest  =4,5
 *         type  =MOVE
 *         capture=ROOK
 **************************************/
void TestMove::read_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * READ enpassant move
 * Input:  e5d6E
 * Output: source=4,4
 *         dest  =5,5
 *         type  =ENPASSANT
 **************************************/
void TestMove::read_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * READ king side castle
 * Input:  e1g1c
 * Output: source=4,0
 *         dest  =6,0
 *         type  =CASTLE_KING
 **************************************/
void TestMove::read_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}


/*************************************
 * READ queen side castle
 * Input:  e1g1C
 * Output: source=4,0
 *         dest  =2,0
 *         type  =CASTLE_QUEEN
 **************************************/
void TestMove::read_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * ASSIGN simple move
 * Input:  e5e6
 * Output: source=4,0
 *         dest  =2,0
 *         type  =CASTLE_QUEEN
 **************************************/
void TestMove::assign_simple()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * ASSIGN capture move
 * Input:  e5d6r
 * Output: source=4,4
 *         dest  =4,5
 *         type  =MOVE
 *         capture=ROOK
 **************************************/
void TestMove::assign_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * ASSIGN enpassant move
 * Input:  e5d6E
 * Output: source=4,4
 *         dest  =5,5
 *         type  =ENPASSANT
 **************************************/
void TestMove::assign_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * ASSIGN king side castle
 * Input:  e1g1c
 * Output: source=4,0
 *         dest  =6,0
 *         type  =CASTLE_KING
 **************************************/
void TestMove::assign_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * ASSIGN queen side castle
 * Input:  e1g1C
 * Output: source=4,0
 *         dest  =2,0
 *         type  =CASTLE_QUEEN
 **************************************/
void TestMove::assign_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * GET TEXT simple move
 * Input : source=4,4
 *         dest  =4,5
 *         type  =MOVE
 * Output: e5e6
 **************************************/
void TestMove::getText_simple()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * GET TEXT capture
 * Input : source=4,4
 *         dest  =4,5
 *         type  =MOVE
 *         capture=ROOK
 * Output: e5e6r
 **************************************/
void TestMove::getText_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * GET TEXT en passant
 * Input : source=4,4
 *         dest  =4,5
 *         type  =ENPASSANT
 *         capture=PAWN
 * Output: e5f6E
 **************************************/
void TestMove::getText_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * GET TEXT king side castle
 * Input : source=4,0
 *         dest  =6,0
 *         type  =CASTLE_KING
 * Output: e1g1c
 **************************************/
void TestMove::getText_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * GET TEXT queen side castle
 * Input : source=4,0
 *         dest  =2,0
 *         type  =CASTLE_QUEEN
 * Output: e1c1C
 **************************************/
void TestMove::getText_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

/*************************************
 * LETTER FROM PIECE TYPE space
 * Input :  SPACE
 * Output:  ' '
 **************************************/
void TestMove::letterFromPieceType_space()
{ // setup
   Move m;
   // exercise
   char type = m.letterFromPieceType(SPACE);
   // verify
   assertUnit(type = ' ');
}

/*************************************
 * LETTER FROM PIECE TYPE pawn
 * Input : PAWN
 * Output:  'p'
 **************************************/
void TestMove::letterFromPieceType_pawn()
{
   Move m;
   // exercise
   char type = m.letterFromPieceType(PAWN);
   // verify
   assertUnit(type = 'p');
}

/*************************************
 * LETTER FROM PIECE TYPE bishop
 * Input : BISHOP
 * Output:  'b'
 **************************************/
void TestMove::letterFromPieceType_bishop()
{
   Move m;
   // exercise
   char type = m.letterFromPieceType(BISHOP);
   // verify
   assertUnit(type = 'b');
}

/*************************************
 * LETTER FROM PIECE TYPE knight
 * Input : KNIGHT
 * Output:  'n'
 **************************************/
void TestMove::letterFromPieceType_knight()
{
   Move m;
   // exercise
   char type = m.letterFromPieceType(KNIGHT);
   // verify
   assertUnit(type = 'n');
}

/*************************************
 * LETTER FROM PIECE TYPE rook
 * Input : ROOK
 * Output:  'r'
 **************************************/
void TestMove::letterFromPieceType_rook()
{
   Move m;
   // exercise
   char type = m.letterFromPieceType(ROOK);
   // verify
   assertUnit(type = 'r');
}

/*************************************
 * LETTER FROM PIECE TYPE queen
 * Input : QUEEN
 * Output:  'q'
 **************************************/
void TestMove::letterFromPieceType_queen()
{
   Move m;
   // exercise
   char type = m.letterFromPieceType(QUEEN);
   // verify
   assertUnit(type = 'q');
}

/*************************************
 * LETTER FROM PIECE TYPE king
 * Input : KING
 * Output:  'k'
 **************************************/
void TestMove::letterFromPieceType_king()
{
   Move m;
   // exercise
   char type = m.letterFromPieceType(KING);
   // verify
   assertUnit(type = 'k');
   assertEquals(type, 'k');
}

/*************************************
 * PIECE TYPE FROM LETTER pawn
 * Input : 'p'
 * Output:  PAWN
 **************************************/
void TestMove::pieceTypeFromLetter_pawn()
{
   Move m;
   PieceType p;
   // exercise
   PieceType type = m.pieceTypeFromLetter('p');
   //verify
   assertUnit(type = PAWN);
}

/*************************************
 * PIECE TYPE FROM LETTER bishop
 * Input : 'b'
 * Output:  BISHOP
 **************************************/
void TestMove::pieceTypeFromLetter_bishop()
{
   Move m;
   PieceType p;
   // exercise
   PieceType type = m.pieceTypeFromLetter('b');
   //verify
   assertUnit(type = BISHOP);
}

/*************************************
 * PIECE TYPE FROM LETTER knight
 * Input : 'n'
 * Output: KNIGHT
 **************************************/
void TestMove::pieceTypeFromLetter_knight()
{
   Move m;
   PieceType p;
   // exercise
   PieceType type = m.pieceTypeFromLetter('n');
   //verify
   assertUnit(type = KNIGHT);
}

/*************************************
 * PIECE TYPE FROM LETTER rook
 * Input : 'r'
 * Output: ROOK
 **************************************/
void TestMove::pieceTypeFromLetter_rook()
{
   Move m;
   PieceType p;
   // exercise
   PieceType type = m.pieceTypeFromLetter('r');
   //verify
   assertUnit(type = ROOK);
}

/*************************************
 * PIECE TYPE FROM LETTER queen
 * Input : 'q'
 * Output: QUEEN
 **************************************/
void TestMove::pieceTypeFromLetter_queen()
{
   Move m;
   PieceType p;
   // exercise
   PieceType type = m.pieceTypeFromLetter('q');
   //verify
   assertUnit(type = QUEEN);
}

/*************************************
 * PIECE TYPE FROM LETTER king
 * Input : 'k'
 * Output: KING
 **************************************/
void TestMove::pieceTypeFromLetter_king()
{
   Move m;
   PieceType p;
   // exercise
   PieceType type = m.pieceTypeFromLetter('k');
   //verify
   assertUnit(type = KING);
}


/*************************************
 * EQUAL - NOT
 * Input : b2b4 == b2b5
 * Output: false
 **************************************/
void TestMove::equal_not()
{  // setup
   //Move m1(0x22, 0x24);
   //Move m2(0x22, 0x25);
   //// exercise
   //cout << m1.source << m1.dest << endl;
   //cout << m2.source << m2.dest << endl;
   //bool match = (m1 == m2);
   //// verify
   //assertUnit(match == false);
}

/*************************************
 * EQUAL - EQUALS
 * Input : b2b4 == b2b4
 * Output: false
 **************************************/
void TestMove::equal_equals()
{ // setup
   //Move m1("b2b4");
   //Move m2("b2b4");
   //// exercise
   //bool match = (m1 == m2);
   //// verify
   //assertUnit(match == true);
}


/*************************************
 * LESS THAN - LESS THAN
 * Input : b2b2 < b2b4
 * Output: true
 **************************************/
void TestMove::lessthan_lessthan()
{ // setup
   //Move m1("b2b2");
   //Move m2("b2b4");
   //// exercise
   //bool isLessThan = (m1 < m2);
   //// verify
   //assertUnit(isLessThan < true);
}

/*************************************
 * LESS THAN - EQUALS
 * Input : b2b4 < b2b4
 * Output: false
 **************************************/
void TestMove::lessthan_equals()
{ // setup
   //Move m1("b2b4");
   //Move m2("b2b4");
   //// exercise
   //bool isLessThan = (m1 < m2);
   //// verify
   //assertUnit(isLessThan < false);
}


/*************************************
 * LESS THAN - GREATAER THAN
 * Input : b2b4 < b2b2
 * Output: false
 **************************************/
void TestMove::lessthan_greaterthan()
{ // setup
   //Move m1("b2b4");
   //Move m2("b2b2");
   //// exercise
   //bool isLessThan = (m1 < m2);
   //// verify
   //assertUnit(isLessThan < false);
}