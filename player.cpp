#include <iostream>
#include "player.h"
#include "board.h"
#include <conio.h>

Player::Player() {
    position = new char(UP);
    isMoving = false;
    isAttacking = false;
}

Player::~Player() {}

char Player::getPosition() {
    return * position;
}


//FIRE PROJECTILE
void Player::fire() {
    projectile = new char('*');

}

//CONTROLS
void Player::getInput() {
    
    isMoving = false;
    isAttacking = false;
    _x = x;
    _y = y;

    if(_kbhit()) {
        switch(_getch()) {
        case 'w':
            *position = UP;
            if(x != 1) {
                x--;
                isMoving = true;
            }
            break;
        case 's':
            *position = DOWN;
            if(x != B_SIZE-2) {
                x++;
                isMoving = true;
            }
            break;
        case 'a':
            *position = LEFT;
            if(y != 1) {
                y--;
                isMoving = true;
            }
            break;
        case 'd':
            *position = RIGHT;
            if(y != B_SIZE-2) {
                y++;
                isMoving = true;
            }
            break;
        case 'h':
            isAttacking = true;
            break;
        case 'q':
            exit(0);
        }
    }

    
}