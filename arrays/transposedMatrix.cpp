#include <iostream>
using namespace std;

void ttranspose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for (int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main () {

    // int arr[3][3];
    // int row = 3;
    // int col = 3;

    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // int transposeArr[3][3]

    // transpose(arr, row, col, transposeArr);

    // printArray(transposeArr, row,col);



    return 0;
}