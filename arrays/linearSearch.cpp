#include <iostream>
using namespace std;

bool findKey (int arr[][3], int rows, int cols, int key) {
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main () {

    int arr[3][3];
    int row = 3;
    int col = 3;

    for(int i =0; i < row; i++){
        for(int j =0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    int key;
    cin >> key;

    cout << findKey(arr, row, col, key) << endl;






    return 0;
}