#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    // cin >> str;
    getline(cin, str);

    cout << str << endl;
    cout << str.length() << endl;
    cout << str.empty() << endl;
    str.push_back('A');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    cout << str.substr(0,6) << endl;

    string a = "Amrendra";
    string b = "Ashish";

    if(a.compare(b) == 0) {
        cout << "a and b are equal" << endl;
    }
    else {
        cout << "different" << endl;
    }
    return 0;
}