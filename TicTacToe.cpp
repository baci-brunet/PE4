#include<iostream>

using namespace std;

int CreateBoard() {
    int board[3][3];
    return board;
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

<<<<<<< baci_branch
void PlaceMaker(int b, int arr, int marker) {
    int x = arr[0][0];
    int y = arr[0][1];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i == x && j == y)
                b[i][j] = marker;
        }
    }
}

=======
>>>>>>> main
int * getPlayerChoice(){
  int coordinates[2];
  std::cout<<"Which location would you like to play?"<<std::endl;
  std::cout<<"X coordinate: "<<std::cin>>x<<std::endl;
  std::cout<<"Y coordinate: "<<std::cin>>y;
  coordinates[0]=x;
  coordinates[1]=y;
  return coordinates;
}
