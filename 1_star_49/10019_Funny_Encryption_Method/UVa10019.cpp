//https://hackmd.io/@blank11/UVA_10019_Funny_Encryption_Method?utm_source=preview-mode&utm_medium=rec
#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        int count_X1 = 0, count_X2 = 0;
        // 十進制轉二進制
        for(int i = N; i > 0; i /= 2){   // 取商數
            count_X1 += i % 2;  // 取餘數
        }                       // 因為要算幾個1，透過連除法去計算餘數 (1)
        while(N != 0){
            // 這邊將輸入的N拆分成每個位數的二進制，ex: 265 -> 2, 6, 5 -> 1: 1 + 2 + 2 = 5
            int temp = N % 10;
            for(int i = temp; i > 0; i /= 2){
                count_X2 += i % 2;
            }
            N /= 10;  
        }
        cout << count_X1 << " " << count_X2 << endl;
    }
    return 0;
}