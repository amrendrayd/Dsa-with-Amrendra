#include <iostream>
using namespace std;

int factorial(int n) {
    // base condition/case
    if(n == 1) return 1;

    // recursive relation / recursive call
    int ans = n * factorial(n-1);
    return ans;
}

int main() {
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}

