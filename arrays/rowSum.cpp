#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols) {
    for(int i =0; i < rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

void printColWiseSum(int arr[][3], int rows, int cols) {
    for(int i =0; i < rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}

int main () {
    int arr[3][3];
    int row = 3;
    int col = 3;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printRowWiseSum(arr, row, col);

    printColWiseSum(arr, row, col);

    return 0;
}