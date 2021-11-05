//https://codeforces.com/problemset/problem/208/A

#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
	for(int i = 0; i < (int)s.length(); ++ i) {
		if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
			i = i + 2, cout << " ";
		else
			cout << s[i];
	}
	cout << endl;
}