//https://yuihuang.com/zj-a741/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[] = {10000000, 100000, 1000, 100};
string s[] = {"kuti", "lakh", "hajar", "shata"};
string ans;

string num2str(ll x){
    string s = "";
    while(x){
        s += '0' + x % 10;  //將個位數 x 轉換成字元，並存進 s 中 (ASCII code中的 '0' = 48。ex: '0' + 1 = 49 => '1')
        x /= 10;    //處理下一個位數
    }
    reverse(s.begin(), s.end());    //將MSB & LSB 調換
    return s;
}

void solve(ll x){
    //For x > a[0] cases
    if(x >= a[0]){
        solve(x / a[0]);    //處理again
        ans += " " + s[0];  //Since > a[0], it will be kuti anywaays
        x %= (int)a[0];     //繼續處理餘數的部分，(int)確保class相同
    }
    //Normal cases
    for(int i = 0; i < 4; i++){
        if(x / a[i] > 0){
            ans += " " + num2str(x / a[i]);
            x %= a[i];
        }
    }
    if(x > 0){
        ans += " " + num2str(x);
    }
}

int main(){

}