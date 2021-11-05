#include<iostream>
using namespace std;
int main() {
	long long n, m, a, b, count;
	cin >> n >> m >> a >> b;

	if(a  *m < b){
    	count = n * a;
    }
	else {
		count = (n / m) * b;
		if(n % m * a > b){
		    count = count + b;
        }
		else{
		    count = count + n % m * a;
        }
	}
	cout << count;
 } 