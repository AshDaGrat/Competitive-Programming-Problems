#include <iostream>
using namespace std;
 
int max(int a, int b, int c, int d){
    if (b > a) 
        {a = b;}
    if (c > a) 
        {a = c;}
    if (d > a) 
        {a = d;}
    return a;
}
 
int main(){
	int x1, x2, x3, x4, a, b, c, m = 0;;
	cin >> x1 >> x2 >> x3 >> x4;
	m = max(x1, x2, x3, x4);
	if (x1 == m){
	    cout << m - x2 << " " << m - x3 << " " << m - x4;
    }
	if (x2 == m){
	    cout << m - x1 << " " << m - x3 << " " << m - x4;
    }
	if (x3 == m){
        cout << m - x1 << " " << m - x2 << " " << m - x4;
    }
	if (x4 == m){
	    cout << m - x1 << " " << m - x3 << " " << m - x2;
    }
}