#include <iostream>
#include "object.h"

using namespace std;

Object::Object(int health):
    health(health){};

//interface

int Object::getHealth(){
    return health;
}

void Object::changeHealth(Object& obj, int damage){
    obj.health = obj.health - damage;
}

//behavior

void Object::attack(Object& enemy,int damage){
    enemy.changeHealth(enemy,damage);
}



