//https://www.hackerrank.com/contests/shaastra-junior/challenges/inside-rectangle

#include <iostream>
using namespace std;

int main(){
    int a[2], b[2], c[2], d[2];
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1] >> d[0] >> d[1];
    int m = abs(a[0] - b[0]);
    int n = abs(a[1] - c[1]);
    cout << (((m+1)*m)/2)*(((n+1)*n)/2);
}