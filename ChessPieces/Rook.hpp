//
//  Rook.hpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#ifndef Rook_hpp
#define Rook_hpp

#include <stdio.h>
#include "ChessPiece.hpp"

class Rook: public ChessPiece
{
    public:
        Rook(ChessBoard* board, Color color);
        ~Rook();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif /* Rook_hpp */
