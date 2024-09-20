#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurence(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end - start) /2;

    int ans = -1;

    while(start <= end){

        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if( target < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start) /2;
    }
    return ans;
}

int main () {

    vector<int> arr {1,2,3,4,4,4,5,6,7};
    int target = 4;

    int result = findFirstOccurence(arr, target);

    cout << "First occurnce of an element is : " << result << endl;
    return 0;
}