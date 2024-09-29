#include <iostream>
#include <string.h>
using namespace std;

bool compareString(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    else {
        int j = 0;

        for(int i = 0; i < a.length(); i++){
            if(a[i] != b[j]){
                return false;
            }
            j++;
        }
    }
    return true;
}

int main() {

    string a = "Amrendra";
    string b = "Amrendra";

    if(compareString(a,b)) {
        cout << "a and b are equal" << endl;
    }
    else {
        cout << "different" << endl;
    }

    string ak = "Hello jee kaise ho";

    string target = "kaise";

    cout << ak.find(target) << endl;

    

    return 0;
}