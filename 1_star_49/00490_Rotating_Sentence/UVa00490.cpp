// https://zerojudge.tw/ShowProblem?problemid=c045
// Refer: https://kai-y.medium.com/uva-490-rotating-sentences-187a23da0494
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s[101];
    int row = 0;
    int max = 0;

    while (getline(cin, s[row])) {
        if (max < s[row].length()){ 
            max = s[row].length();  //Update the data of max
        }
        row++;
    }

    for (int i = 0; i < max; i++){
        for (int j = row-1; j >= 0; j--){
            if (s[j].length() > i){
                cout << s[j][i];
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

//C++11 AC 0.000