// https://zerojudge.tw/ShowProblem?problemid=e579
//Fixed by ChatGPT
#include <iostream>
using namespace std;

int main(){
    int T, N, P;
    cin >> T;
    while(T--){
        cin >> N >> P;
        int h[P];
        for(int i = 0; i < P; i++){
            cin >> h[i];
        }

        int total = 0;
        for(int i = 1; i <= N; i++){
            if(i % 7 != 0 && i % 7 != 6){
                for(int j = 0; j < P; j++){
                    if(i % h[j] == 0){
                        total++;
                        break;
                    }
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}

//C++11 AC 0.000