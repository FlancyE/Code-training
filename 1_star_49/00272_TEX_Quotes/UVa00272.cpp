#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cnt = 0;
    int t;
    while (true) {
        cin >> t;
        vector<string> B(t);
        for (int i = 0; i < B.size(); i++) {
            cin >> B[i];
            if (B[i] == "\"") {
                if (cnt % 2 == 0) {
                    B[i] = "``";
                } else {
                    B[i] = "''";
                }
                cnt++;
            }
        }
        
        // 输出连接后的字符串
        for (int i = 0; i < B.size(); i++) {
            cout << B[i];
            if (i < B.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
