#include <iostream>

class Object{
    //properties
    int health;
    
    public:
    //constructor
    Object(int health);

    //interface
    int getHealth();
    void changeHealth(Object& obj, int damage);

    //behaviors
    void attack(Object& enemy,int damage); //what we attack and how much damage we do
    
};