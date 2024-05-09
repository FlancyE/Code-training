// https://zerojudge.tw/ShowProblem?problemid=e561
#include <iostream>
using namespace std;

int main(){
    int n, l;
    cin >> n;
    while(n--){
        cin >> l;
        int s[l];
        for(int i = 0; i < l; i++){
            cin >> s[i];
        }
        int swaps = 0;
        //Bouble Sort
        for(int i = l - 1; i > 0; i--){
            for(int j = 0; j <= i - 1; j++){
                if(s[j] > s[j+1]){
                    int temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                    swaps++;    //check how many times swapping
                }
            }
        }
        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
    }
    return 0;
}

//C++11 AC 0.000