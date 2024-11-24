#ifndef BOARD_H
#define BOARD_H
#include "player.hpp"
#include<string>
using namespace std ;
class Board
{
public:
    char board[3][3];
    void initilizeBoard();
    bool makeMove(int row , int col , PieceType pieceType);
    bool isValidMove(int row, int col);
    bool checkWin(int row , int col , PieceType pieceType) ;
    void displayBoard() ;
    bool isFull() ;
    char enumTochar(PieceType piecetype) ;
};

#endif