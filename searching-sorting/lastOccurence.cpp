#include <iostream>
#include <vector>
using namespace std;

int findLastOccurence(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end-start) / 2;
    int ans = -1;

    while (start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start) / 2;
    }
    return ans; 
}

int main() {

    vector<int> arr{1,2,3,5,5,5,6,7,8};
    int target = 5;
    int result = findLastOccurence(arr, target);

    if(result == -1){
        cout << "Not found" << endl;
    }
    else {
        cout << "Last occurence of an element: " << result << endl;
    }
    return 0;
}