#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n && n){
		string s;
		int sum = 0;
		for(int i = n; i > 0; i /= 2){
			s += to_string(i % 2);
			sum += i % 2;
		}
		reverse(s.begin(), s.end());
		cout << "The parity of " << s << " is " << sum << " (mod 2)." << endl;
	}
	return 0;
}

//C++11 AC