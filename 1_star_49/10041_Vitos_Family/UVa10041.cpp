//https://mousecoding.blogspot.com/2020/09/zerojudge-a737.html
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    int mid = s[n / 2];
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans += abs(s[i] - mid);
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

//C++11 AC 0.020