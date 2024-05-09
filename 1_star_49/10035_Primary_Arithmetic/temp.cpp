#include <iostream>
using namespace std;

int main(){
    string a, b;
    while(true){
        cin >> a >> b;
        if(a == "0" && b == "0")
            break;

        int sum = 0;
        int carry = 0;
        for(int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--){
            int digit_a = (i >= 0) ? (a[i] - '0') : 0;
            int digit_b = (j >= 0) ? (b[j] - '0') : 0;
            if((digit_a + digit_b + carry) >= 10){
                sum++;
                carry = 1;
            }
            else{
                carry = 0;
            }
        }
        if(sum == 0){
            cout << "No carry operation." << endl;
        } else if (sum == 1){
            cout << "1 carry operation." << endl;
        } else {
            cout << sum << " carry operations." << endl;
        }
    }
    return 0;
}
