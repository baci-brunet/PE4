#include<iostream>
#include <string>




// declare Board Class
#ifndef BOARD_H  // this is the header guard
#define BOARD_H
class Board {
  public:
    //Constructors
    Board(){
      for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
          board_[i][j]="⬜️";
        }
      }
    }

    void DisplayBoard(){
      for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
          std::cout<<board_[i][j];
        }
        std::cout<<std::endl;
      }
      std::cout<<std::endl;
    }

    void PlaceMaker(int x, int y, std::string marker){
      std::cout<<"flag"<<std::endl;
      board_[x][y]= marker;
    }

    void getPlayerChoice(int *a, int *b){
      int x,y;
      std::cout<<"Which location would you like to play?"<<std::endl;
      std::cout<<"X coordinate: ";
      std::cin>>x;
      std::cout<<std::endl;
      std::cout<<"Y coordinate: ";
      std::cin>>y;
      *a=x;
      *b=y;
    }


  private:
    std::string board_[3][3];
};

#endif //end POINT_H header guard





//Main

int main(){
  Board b;
  int x=0;
  int y=0;
  int counter=0;
  bool game=true;
  std::string markers[2]={"❌", "⭕️"};
  int player=0;

  while(game){
      b.DisplayBoard();
      b.getPlayerChoice(&x,&y);
      b.PlaceMaker(x, y, markers[player]);

      counter++;
      player= counter%2;

      if(counter>9){
        game=false;
      }
  }

  b.DisplayBoard();
}

