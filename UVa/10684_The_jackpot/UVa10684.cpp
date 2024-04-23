#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	while(cin >> t && t){
		vector<int> B;
		int sum = 0;

		while(t--){
			cin >> n;
			B.push_back(n);
		}

		int current_sum = 0;
		int max_sum = 0;

		for(int i = 0; i < B.size(); i++){
			current_sum += B[i];
			if(current_sum > max_sum){
				max_sum = current_sum;
			}
			if(current_sum < 0){
				current_sum = 0;
			}
		}

		if(max_sum > 0){
			cout << "The maximum winning streak is " << max_sum << "." << endl;
		}
		else{
			cout << "Losing streak." << endl;
		}
	}
	return 0;
}	