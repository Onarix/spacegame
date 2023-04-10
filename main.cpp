#include <iostream>
#include "board.h"
#include "player.h"
#include <windows.h>


using namespace std;

int main() {
    Board level_1;
    Player player;

    player.x = 1;
    player.y = 0;



    while(true) {
        level_1.refresh();
        player.getInput();
        if(player.isMoving) { level_1.board[player._x][player._y] = ' ';}
        level_1.board[player.x][player.y] = player.getPosition();
        Sleep(50);
    }
    

    return 0;
}