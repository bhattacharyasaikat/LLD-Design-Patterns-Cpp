#ifndef PLAYER_H
#define PLAYER_H

#include <string>
enum PieceType {
    X,
    O
};

class Player{
   private :
   PieceType pieceType ;
   std :: string Name ;
   public:
   Player(PieceType p) ;
   PieceType getPieceType() ;
   void setName() ;
   std:: string getName() ;
} ;

#endif