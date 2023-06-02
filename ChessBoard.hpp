//
//  ChessBoard.hpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#ifndef ChessBoard_hpp
#define ChessBoard_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
struct Position{
    int row;
    int col;
    Position(int _row, int _col){
        row=_row;
        col=_col;
    }
};
class ChessPiece;

class ChessBoard
{
    public:
        ChessBoard();
        virtual ~ChessBoard();
        ChessPiece* getPiece(Position position) const;// returns the chess piece at a given position.
        bool static isCorrect(const int);
        static string coordToString(const int, const int);
        static Position coordToPosition(const string);
        void initialize();
        void print() const;
        void printWindows() const;
        bool move(string fromStr, string toStr);
        bool placePiece(ChessPiece* piece, Position position);

    protected:

    private:
        ChessPiece* board[8][8];
};

#endif /* ChessBoard_hpp */
