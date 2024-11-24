#include <bits/stdc++.h>
#include "board.hpp"
#include "player.hpp"

using namespace std ;

int main(){
    Board* board = new Board();
    Player* player1 = new Player(PieceType :: X) ;
    Player* player2 = new Player(PieceType :: O);
    deque<Player*>dq ;
    dq.push_back(player1) ;
    dq.push_back(player2) ;

    board->initilizeBoard() ;
    bool isWinner = true ;
    while(isWinner){
        Player* currPlayer = dq.front() ;
        dq.pop_front() ;

        // take input
        string currPlayerName = currPlayer->getName() ;
        char currPieceType = board->enumTochar(currPlayer ->getPieceType ()) ; ;
        cout << currPlayerName << ", enter your move (row and column): ";
       int row , col ;
       cin >> row >> col ;

       // if valid the make move
    
       if(board->isValidMove(row,col)){
          // make move
          board->makeMove(row,col,currPlayer->getPieceType()) ;

          // win
          if(board->checkWin(row , col, currPlayer->getPieceType())){
            board->displayBoard() ;
            cout<<currPlayerName <<" won" << endl ;
            isWinner = false ;
          }

          if(board->isFull()){
               isWinner = false ;
               board->displayBoard() ;
               cout<<"Draw" << endl ;

          }
          
          dq.push_back(currPlayer) ;

       }
       else{
        cout<<"invalid move\n" ;
       }
    }
   return 0 ;
}