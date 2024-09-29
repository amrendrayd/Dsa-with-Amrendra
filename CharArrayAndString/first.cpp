#include <iostream>
#include <string.h>
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
int main() {
    char name[100];
    // cin.getline(name, 50);
    cin >> name;

    cout << name << endl;
    cout << getLength(name) << endl;
    cout << strlen(name) << endl;

    return 0;
}