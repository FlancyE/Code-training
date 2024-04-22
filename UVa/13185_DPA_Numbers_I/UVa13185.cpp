//UVa13185 adjusted by ChatGPT
#include <bits/stdc++.h>
using namespace std;

int Factorization(int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	vector<int> B(t);

	for(int i = 0; i < t; i++){
		cin >> B[i];		//依序寫入測試值
	}

	for(int i = 0; i < t; i++){
		int n = B[i];
		int sum = Factorization(n);

		if(sum < n){
			cout << "deficient" << endl;
		} else if(sum == n){
			cout << "perfect" << endl;
		} else{
			cout << "abundant" << endl;
		}
	}
	return 0;
}

//C++11 AC 0.000(?