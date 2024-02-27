#include <iostream>
using namespace std;

int main(){
    //short int 的表示範圍為 -32768 ~ 32767 (一個圓形)
    short int score = 32766;
    short int scoreP;

    cout << SHRT_MAX << endl;   
    cout << SHRT_MIN << endl;

    scoreP = score + 1; //overflow
    cout << scoreP << endl;
    scoreP = score + 2; 
    cout << scoreP << endl;
    scoreP = score + 3;
    cout << scoreP << endl;

    scoreP = 65535;
    cout << scoreP << endl;
    return 0;
}