//Refrenced by: https://yuihuang.com/zj-c813/
#include <iostream>
using namespace std;

int func(int x)
{
    int sum = 0;    
    while(x != 0){
        sum += x % 10;  //取最右邊的位數值：47 => 7
        x /= 10;
    }
    if (sum < 10){
        return sum;
    }
    else{               //如果 sum>10 ，做recursive直到 sum<10
        return func(sum);
    }
    
}

int main()
{
    int n;
    while(cin >> n && n){    //if n == 0, while迴圈停止，另一種寫法：while(cin >> n && n) 
        cout << func(n) << endl;
    }
    return 0;
}

