#include<iostream>

using namespace std;

int CreateBoard() {
    int board[3][3];
}

void DisplayBoard(int b[3][3]){
  for (int i=0; i<b.size(); i++){
    for (int j=0; j<b.size(); j++){
      std::cout<<b[i][j];
    }
    std::cout<<std::endl;
  }
  std::cout<<std::endl;
}

int * getPlayerChoice(){
  int coordinates[2];
  std::cout<<"Which location would you like to play?"<<std::endl;
  std::cout<<"X coordinate: "<<std::cin>>x<<std::endl;
  std::cout<<"Y coordinate: "<<std::cin>>y;
  coordinates[0]=x;
  coordinates[1]=y;
  return coordinates;
}
