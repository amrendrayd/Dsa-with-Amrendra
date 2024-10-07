#include <iostream>
using namespace std;

int main() {

    int arr[4] = {12,14,16,18};

    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;

    // int *p = arr;
    // cout << p << endl;
    // cout << &p << endl;

    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr) + 1 << endl;

    // cout <<  *(arr+1) << endl;

    // int i = 0;
    // cout << arr[i] << endl;
    // cout << i[arr] << endl;
    // cout << *(arr+i) << endl;
    // cout << *(i+arr) << endl;

    // cout << sizeof(arr) << endl;

    // int *p = arr;
    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;

    // char ch[10] = "amrendra";

    // char *c = ch;

    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << ch[0] << endl;
    // cout << &c << endl;
    // cout << *c << endl;
    // cout << c << endl;

    // char name[9] = "SherBano";
    // char * c = &name[0];

    // cout << name << endl;
    // cout << &name << endl;
    // cout << *(name+3) << endl;
    // cout << c << endl;
    // cout << &c << endl;
    // cout << *(c+3) << endl;
    // cout << c+2 << endl;
    // cout << *c << endl;
    // cout << c+8 << endl;

    char ch = 'k';
    char * cptr = &ch;

    cout << cptr << endl; //garbeg value

    char name[10] = "amrendra";
    char *c = "amrendra";

    cout << c << endl;
    return 0;
}