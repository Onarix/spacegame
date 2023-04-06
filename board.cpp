#include <iostream>
#include "board.h"
using namespace std;


Board::Board() {
    for(int i = 0; i < B_SIZE; i++) {
        board[0][i] = '-';
        board[B_SIZE-1][i] = '-';

        if(i > 0 && i < B_SIZE - 1) {
            for(int j = 0; j < B_SIZE; j++) {
                board[i][j] = ' ';
            }
        }
        
    }

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

char Board::startPosition() {
    return board[1][0];
}