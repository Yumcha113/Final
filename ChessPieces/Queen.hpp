//
//  Queen.hpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#ifndef Queen_hpp
#define Queen_hpp

#include <stdio.h>
#include "ChessPiece.hpp"

class Queen : public ChessPiece
{
    public:
        Queen(ChessBoard* board, Color color);
        virtual ~Queen();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif /* Queen_hpp */
