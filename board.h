#define B_SIZE 4

class Board{
    char board[B_SIZE][B_SIZE]; 

public:
    Board();
    ~Board();

   void refresh();

};