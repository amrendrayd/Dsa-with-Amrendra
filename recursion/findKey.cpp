#include <iostream>
#include <vector>
using namespace std;

// bool checkKey(string str, int n, int i, char key){
//     if(i >= n) return false;

//     if(str[i] == key) return true;

//     bool ans = checkKey(str, n, i+1, key);

//     return ans;
// }

// using byrefrence
bool checkKey(string& str, int& n, int& i, char& key){
    if(i >= n) return false;

    if(str[i] == key) return true; 

    int newI = i+1;

    bool ans = checkKey(str, n, newI, key);

    return ans;
}

// index position
int findIndex(string& str, int& n, int i, char& key){
    if(i >= n) return -1;

    if(str[i] == key) return i; 

    return findIndex(str, n, i+1, key);
}

void findAllIndex(string& str, int& n, int i, char& key){
    if(i >= n) return ;

    if(str[i] == key) {
        cout << "Found at: " << i << endl;
    } 

    findAllIndex(str, n, i+1, key);
}

void findAllIndexStore(string& str, int& n, int i, char& key , vector<int>& ans2){
    if(i >= n) return ;

    if(str[i] == key) {
        ans2.push_back(i);
    } 

    findAllIndexStore(str, n, i+1, key, ans2);
}

void countElement(string& str, int& n, int i, char& key , int& count){
    if(i >= n) return ;

    if(str[i] == key) {
        count++;
    } 

    return countElement(str, n, i+1, key, count);
}



int main() {

    string str = "amrendrayadav";
    int n = str.length();

    int i = 0;
    char key = 'a';

    vector<int> ans2;

    bool ans = checkKey(str, n, i, key);

    int result = findIndex(str, n, i, key);

    cout << "check present or not: " << ans << endl;

    cout << "Index of element: " << result << endl;

    findAllIndex(str, n, i, key);
    cout << endl;

    findAllIndexStore(str, n, i, key, ans2);
    for(auto value: ans2){
        cout << value << " ";
    }
    cout << endl;

    // count
    int count = 0;
    countElement(str, n, i, key, count);
    cout << count << endl;


    

    return 0;

}