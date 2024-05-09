// https://zerojudge.tw/ShowProblem?problemid=d226
#include <iostream>
using namespace std;

int main(){
    int v, s = 0;
    unsigned int t;
    while(cin >> v >> t){
        s = v * (2*t);
        cout << s << endl;
    }
    return 0;
}
//C++11 AC 0.090