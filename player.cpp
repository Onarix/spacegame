#include <iostream>
#include "player.h"

Player::Player() {
    position = new char(UP);
}

Player::~Player() {}

char Player::getPosition() {
    return * position;
}