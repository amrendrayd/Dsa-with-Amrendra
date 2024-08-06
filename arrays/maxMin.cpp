#include <iostream>
#include <limits.h>
using namespace std;

int getMaxi(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i =0; i < rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int getMini(int arr[][3], int rows, int cols){
    int mini = INT_MAX;
    for(int i =0; i < rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main () {

    int arr[3][3];
    int row = 3;
    int col = 3;

    for (int i=0; i<row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    int maxResult = getMaxi(arr, row, col);

    cout << "Maximun element is: " << maxResult << endl;

    int minResult = getMini(arr, row, col);

    cout << "Minimum element is: " << minResult << endl;



    return 0;
}