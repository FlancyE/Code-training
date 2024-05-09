#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, square_total;
    while(true){
        cin >> x >> y;
        if(x == 0 && y == 0){
            break;
        }
        square_total = 0;
        for(x; x <= y; x++){
            if(sqrt(x) == (int)sqrt(x)){    //檢測開根號後是否為整數
                square_total += 1;
            }
        }
        cout << square_total << endl;
    }
    return 0;
}