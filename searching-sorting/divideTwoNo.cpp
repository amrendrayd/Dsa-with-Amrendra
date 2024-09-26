#include <iostream>
using namespace std;

int solve(int dividend, int divisor){
    int start = 0;
    int end = abs(dividend);

    int ans = 0;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }

        if(abs(mid*divisor) > abs(dividend)){
            end = mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }
        mid = start + (end - start) / 2;
    }

    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        return ans;
    }
    else {
        return -ans;
    }
}

int main(){

    int dividend = 22;
    int divisor = 4;

    int ans = solve(dividend, divisor);

    cout << "Ans is " << ans << endl;

    int precision;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    for(int i=0; i<precision; i++){
        for(double j=ans; j*divisor<=dividend; j = j+step){
            finalAns = j;
        }
        step = step / 10;
    }

    cout << "Final ans is : " << finalAns << endl;
    return 0;
}