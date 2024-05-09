// https://zerojudge.tw/ShowProblem?problemid=c014
//Refer: https://kai-y.medium.com/uva-10035-primary-arithmetic-bfad01fd1d5c
#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int a, b;
    int digit_a, digit_b, carry, flag;

    while(cin >> a >> b){
        carry = 0;
        bool flag = false;

        if(a == 0 && b == 0){
            break;
        }

        while(a > 0 || b > 0){
            digit_a = a % 10;   //Get the last digit of a   
            digit_b = b % 10;
            if(digit_a + digit_b + flag >= 10){
                carry++;
                flag = true;
            } else{
                flag = false; //Reset flag
            }
            a /= 10;    // Remove the last digit of a
            b /= 10;
        }

        if(carry == 0){
            cout << "No carry operation." << endl;
        } else if (carry == 1){
            cout << "1 carry operation." << endl;
        } else{
            cout << carry << " carry operations." << endl;
        }
    }
    return 0;
}