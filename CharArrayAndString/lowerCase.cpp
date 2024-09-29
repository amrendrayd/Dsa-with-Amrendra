#include <iostream>
using namespace std;


int getLength(char name[]){
    int length = 0;
    int i = 0;

    while (name[i] != '\0'){
        length++;
        i++;
    }
    return length; 
}

void convertLowerCase(char arr[]){
    int n = getLength(arr);

    for(int i = 0; i<n; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main() {

    char arr[100] = "AMRENDRA";

    convertLowerCase(arr);

    cout << arr << endl;
    return 0;
}