#define B_SIZE 16

struct Board{
    char board[B_SIZE][B_SIZE]; 


    Board();
    ~Board();

   void refresh();
   char startPosition();

};