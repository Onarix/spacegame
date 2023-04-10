#define UP '^'
#define DOWN 'v'
#define LEFT '<'
#define RIGHT '>'

class Player {
    char* position;
    char* projectile;
public:
    unsigned int x, y, _x, _y;
    bool isMoving;

    Player();
    ~Player();
    char getPosition();
    void getInput();
    void fire();

};