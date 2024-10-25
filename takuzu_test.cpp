#include "takuzu.h"
#include "heuristic.h"

// This is a global variable with the tables of g and f functions. Don't erase it
Scores S;

// The effort to move from any state of the game to any of its neighbours is considered to be the same,
// independently of the chosen neighbour. This is just a choice; more sophisticated distances can be
// programmed, but we prefer to subsume them inside the heuristics so don't change this function
float dist(Board b1,Board b2)
{
 return(1.0);
}

// This function must be done by the alumni
// It should resturn true and set the variable 'solved' to the full takuzu final board,
// or return false and set the variable 'solved' to the last board tried.
bool AStar(Board start,Board &solved)
{
 
}

// Don't change main
int main(int argc,char *argv[])
{
 if (argc!=2)
 {
  cerr << "Usage:\n       " << argv[0] << "board_file\n";
  exit(1);
 }

 string fname=string(argv[1]);

 // A board is created and filled with the content of the file passed as argument
 // By using the constructor with two arguments we say that we want to print in the console (cout)
 // the initial baord, as loaded from the file, and the board after the compulsory movements have been done
 Board my_board(fname,cout);
 
 // Now, usng the constructor with one argument (the number of squares) we create an empty board to contain the final solution
 Board solution(my_board.GetSize());
 
 if (AStar(my_board,solution))
  cout << "Takuzu solved!. The final board is:\n";
 else
  cout << "Takuzu NOT solved!. The current board is\n";
  
 // We print in the screen the final board, either if a solution has been found or if not
 solution.Show(cout);
  
 return 0;
}
