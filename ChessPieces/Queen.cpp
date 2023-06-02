//
//  Queen.cpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#include "Queen.hpp"

Queen::Queen(ChessBoard* board, Color color):ChessPiece(board, color)
{
}

Queen::~Queen()
{
}

string Queen::toString() const{
    if(color==BLACK)
        return "\u265B";
    else
        return "\u2655";
}

vector<string>* Queen::legalMoves()const{
   vector<string>* res=new vector<string>();
    return res;
}
