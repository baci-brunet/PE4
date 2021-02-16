#include<iostream>

using namespace std;

int CreateBoard() {
    int board[3][3];
}

void DisplayBoard(int *b){
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      std::cout<<b[i][j];
    }
    std::cout<<std::endl;
  }
  std::cout<<std::endl;
}


