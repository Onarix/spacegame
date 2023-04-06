#include <iostream>
#include "board.h"
#include "player.h"

using namespace std;

int main() {
    Board level_1;
    Player player;

    level_1.board[1][0] = player.getPosition();

    level_1.refresh();

    return 0;
}