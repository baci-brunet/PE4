#include<iostream>

using namespace std;

int CreateBoard() {
    int board[3][3];
}

void DisplayBoard(int arr[3][3]) {
    for (int i = 0; i < size(arr); i++)
        for (int j = 0; j < size(arr[i]); j++)
            cout << arr[i][j] << endl;
}