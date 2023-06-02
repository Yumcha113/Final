//
//  Bishop.hpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#ifndef Bishop_hpp
#define Bishop_hpp

#include <stdio.h>
#include <string>
#include "ChessPiece.hpp"
#include <vector>
using namespace std;
class Bishop : public ChessPiece
{
    public:
        Bishop(ChessBoard* board, Color color);
        virtual ~Bishop();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif /* Bishop_hpp */
