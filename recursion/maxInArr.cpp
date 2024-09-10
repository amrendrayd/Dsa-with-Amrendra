#include <iostream>
#include <limits.h>
using namespace std;

void printMax(int arr[], int n, int i, int& max){
    if(i>=n) return;

    if(arr[i] > max){
        max = arr[i];
    }

    printMax(arr, n, i+1, max);
}

void findMin(int arr[], int n, int i, int& mini){
    if(i>=n) return ;

    mini = min(mini, arr[i]);

    findMin(arr, n, i+1, mini); 
}

int main() {

    int arr[] = {1,4,3,2,6,8,9,5};
    int n = 8;
    int i = 0;
    int max = INT_MIN;
    int mini = INT_MAX;

    printMax(arr, n, i+1, max);

    findMin(arr, n, i, mini);

    cout << max << endl;
    cout << mini << endl;
    return 0;
}