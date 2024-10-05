#include <iostream>
using namespace std;

int main() {

    int a = 5;

    // cout << a << endl;
    cout << &a << endl;

    // pointer created
    int * ptr = &a;

    // access the value ptr is pointing to
    cout << ptr << endl;
    cout << *ptr << endl; //d refrence
    cout << &ptr << endl;

    cout << sizeof(ptr) << endl;

    char ch = 'b';

    char * c = &ch;
    cout << sizeof(c) << endl;

    int *p;
    cout << *p << endl; //garbeg value

    int *b = 0;
    cout << *b << endl;

    return 0;
}