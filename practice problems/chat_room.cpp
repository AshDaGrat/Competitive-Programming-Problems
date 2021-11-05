//https://codeforces.com/problemset/problem/58/A

#include <iostream>
using namespace std;
 
int main() {
	string a, b = "hello";
	int j = 0, count = 0;
	cin >> a;
	for(int i = 0; i < a.size(); i++) {
		if(a[i] == b[j]) {
			j++;
			count++;
		}
		if(count == 5) break;
	}
	if(count == 5) {
        cout << "YES";
    }
	else{
        cout<<"NO";
    }
}