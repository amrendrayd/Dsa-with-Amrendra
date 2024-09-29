#include <iostream>
#include <vector>
using namespace std;

bool checkShort(vector<int>& arr, int& n, int i){
    if(i == n-1){
        return true;
    }

    if(arr[i+1] < arr[i]){
        return false;
    }

    return checkShort(arr, n, i+1);

}

int main() {

    vector<int> v{1,2,5,3,7,9,6};
    int n = v.size();
    int i = 0;

    bool isShorted = checkShort(v, n, i);

    if(isShorted){
        cout << "Array is shorted" << endl;
    }
    else {
        cout << "Array is not shorted" << endl;
    }

    return 0;
}