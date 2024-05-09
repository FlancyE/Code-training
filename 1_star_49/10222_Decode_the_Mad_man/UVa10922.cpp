#include <bits/stdc++.h>
using namespace std;

int main(){
	string keyboard = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./"; 
	while(true){
        string line;
        getline(cin, line);
		for(char& c : line){
			if('A' <= c && c <= 'Z'){
				c = tolower(c);
			}
			if(c == ' '){
				cout << " ";
			} else{
				for(int j = 0; j < keyboard.length(); j++){
					if(c == keyboard[j]){
						cout << keyboard[j-2];
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}

//timelimit