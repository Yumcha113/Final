//
//  Knight.cpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#include "Knight.hpp"

Knight::Knight(ChessBoard* board, Color color):ChessPiece(board, color)
{
    
}

Knight::~Knight()
{
    
}


string Knight::toString() const{
    if(color==BLACK)
        return "\u265E";
    else
        return "\u2658";
}


vector<string>* Knight::legalMoves()const{
   vector<string>* res=new vector<string>();
    return res;

}
