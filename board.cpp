#include <iostream>
#include "board.h"
using namespace std;


Board::Board() {
    char board[B_SIZE][B_SIZE] = {{'48','48','48','48'},{'48','48','48','48'},{'48','48','48','48'},{'48','48','48','48'}};
}

Board::~Board() {}



void Board::refresh()
{
    for(int i = 0; i < B_SIZE; i++) {
        for(int j = 0; j < B_SIZE; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}
