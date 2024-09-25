#include <iostream>
using namespace std;

bool binarySearch(int arr[][4], int row, int col, int target){
    int start = 0;
    int end = row*col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int rowIndex = mid/col;
        int colIndex = mid%col;

        if(arr[rowIndex][colIndex] == target){
            cout << "Found at: " << rowIndex << " " << colIndex << endl;
            return true;
        }

        if(arr[rowIndex][colIndex] < target){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
         mid = start + (end - start) / 2;
    }
    return false;
    
}

int main() {

    int arr[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    int row = 5; 
    int col = 4;

    int target = 19;

    bool ans = binarySearch(arr, row, col, target);

    if(ans){
        cout << "Found" << endl;
    }
    else {
        cout << "Not Found" << endl;
    }


    return 0;
}