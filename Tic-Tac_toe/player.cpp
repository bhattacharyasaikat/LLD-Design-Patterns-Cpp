#include<bits/stdc++.h>
#include "player.hpp"

using namespace std ;

Player :: Player(PieceType pieceItem){
    this->pieceType = pieceItem ;
}
PieceType Player  :: getPieceType(){
    return this->pieceType ;
}
void Player :: setName(){
    if(this->pieceType == PieceType :: X)
        this->Name = "Player 1" ;
    else 
        this->Name = "Player 2" ;
}
string Player::getName(){
    return this->Name ;
}