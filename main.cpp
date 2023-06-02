#include <iostream>
#include <curses.h>
#include "ChessBoard.hpp"
using namespace std;

int main()
{
    int playGame = 1;
    int quitGame = 2;
    cout << "Would you like to play a game of MESS? \n " <<endl;
    cout << "(1) Play. \n" << endl;
    cout <<"(2) Exit Game. \n" << endl;
    
    if(playGame == 1)
    {
        cin >> playGame;
        cout <<"Playing Game: \n " << endl;
    }
    else if (quitGame == 2)
    {
        cout << "Quitting Game... \n " << endl;
        cin >> quitGame;
        system("clear");
    }
    ChessBoard board;
    board.initialize();
    board.print();
    bool status;
    
    cout << "Color White goes first. \n " << endl;

    while(true){
        string from, to;
        cout <<"Enter from: ";
        cin >> from;
        cout << "Enter to: ";
        cin >> to;
        status = board.move(from, to);
        if (status==true)
            board.print();
    }
    return 0;
}
