#include<iostream>
#include <string>
#include "Board.cpp"
#include "Board.h"

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
