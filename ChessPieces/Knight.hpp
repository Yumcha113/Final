//
//  Knight.hpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#ifndef Knight_hpp
#define Knight_hpp

#include <stdio.h>
#include "ChessPiece.hpp"

class Knight : public ChessPiece
{
    public:
        Knight(ChessBoard* board, Color color);
        virtual ~Knight();
        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};
#endif /* Knight_hpp */
