#include <iostream>
using namespace std;

int findSearch(int arr[], int size, int target){
    int start = 0; 
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start <= end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
        if(target < element){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {

    int arr[] = {1,3,4,5,7,9,12};
    int size = 7;

    int target = 13;

    int result = findSearch(arr, size, target);

    if(result == -1){
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at: " << result <<endl;
    }

    return 0;
}