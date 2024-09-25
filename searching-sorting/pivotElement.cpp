#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) /2;

    while(start <= end){
        if(mid < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid-1] > arr[mid]){
            return mid-1;
        }

        if(arr[start] >= arr[mid]){
            end = mid -1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start) /2;
    }
    return -1;
}

int main() {
    vector<int> arr{1,2,3,4,6,7,1,2,};

    int ans = findPivot(arr);

    cout << "Index of pivot element is: " << ans << endl;

    return 0;
}