//
//  Pawn.hpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#ifndef Pawn_hpp
#define Pawn_hpp

#include <stdio.h>
#include "ChessPiece.hpp"

class Pawn : public ChessPiece
{
    public:
        Pawn(ChessBoard *board, Color color);
        virtual ~Pawn();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:
        bool wasMoved;
    private:
};

#endif /* Pawn_hpp */
