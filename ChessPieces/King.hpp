//
//  King.hpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#ifndef King_hpp
#define King_hpp

#include <stdio.h>
#include "ChessPiece.hpp"
class King : public ChessPiece
{
    public:
        King(ChessBoard* board, Color color);
        virtual ~King();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif /* King_hpp */
