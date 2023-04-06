#define UP '^'
#define DOWN 'v'
#define LEFT '<'
#define RIGHT '>'

class Player {
    char* position;

public:
    Player();
    ~Player();
    char getPosition();

};