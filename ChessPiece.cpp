//
//  ChessPiece.cpp
//  Final exam
//
//  Created by Andy Lim on 5/26/23.
//

#include "ChessPiece.hpp"
#include "ChessBoard.hpp"
using namespace std;

ChessPiece::ChessPiece(ChessBoard* board, Color color) {
    this->board = board;
    this->color = color;
}
string ChessPiece::getPosition() const // returns the position of the piece in a letter and number position
{
    char ans = row + 'a';
    char ans2 = column + '0';
  string res = "" + ans;
    res = res + ans2;
    return res;
}

void ChessPiece::setRow(const int i) {
    if ((i >= 0) && (i < 8))
        row = i;
}
void ChessPiece::setColumn(const int i) {
    if ((i >= 0) && (i < 8))
        column = i;
}

void ChessPiece::setPosition(const string position) {
    setRow(position[0] - 'a');
    setColumn(position[1]);
}

void ChessPiece::setPosition(const Position position) {
    setRow(position.row);
    setColumn(position.col);
}
