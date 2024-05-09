#include <iostream>
using namespace std;

int solve(int x, int y){
	return (x + y) * (x + y + 1) / 2 + x;
}

int main(){
	int n; 
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int result = solve(x2, y2) - solve(x1, y1);
		cout << "Case " << i << ": " << result << endl;
	}
	return 0;
}