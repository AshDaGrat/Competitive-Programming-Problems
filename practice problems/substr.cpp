//https://codeforces.com/contest/1367/problem/A

#include <iostream>
using namespace std;
 
int main() {
	int t;
	string s;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> s;
		cout << s[0] << s[1];
		for(int j = 2; j < s.size(); j += 2){
			cout << s[j + 1];
		}
		cout << endl;
	}
}