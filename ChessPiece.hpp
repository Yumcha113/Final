//
//  ChessPiece.hpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#ifndef ChessPiece_hpp
#define ChessPiece_hpp

#include <stdio.h>
#include "ChessBoard.hpp"
#include <string>
using namespace std;

enum Color { WHITE, BLACK };

class ChessPiece
{
protected:
    ChessBoard* board; // the board goes back to null
    int row; // the index of the horizontal rows 0..7
    int column; // the index of the vertical column 0..7
    Color color; // the color of the piece
public:
    ChessPiece(ChessBoard* board, Color color);
    ~ChessPiece() {}

    
    int getRow() const { return row; } // the row.
    int getColumn() const { return column; } // returns the column.
    Color getColor() const { return color; } // returns the color of the piece
    string getPosition() const; // returns the piece from a letter to a number

    
    void setRow(const int);
    void setColumn(const int); //sets the column.
    void setPosition(const Position); //
    void setPosition(const string); //

    virtual string toString() const = 0;//
    virtual vector<string>* legalMoves() const = 0;

};
#endif /* ChessPiece_hpp */
