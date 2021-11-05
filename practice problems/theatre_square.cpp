//https://codeforces.com/problemset/problem/1/A

#include <iostream>
using namespace std;

int main(){
    long long int a, b, c;
    cin >> a >> b >> c;
    a += (c - 1);
    b += (c - 1);
    cout << ((a/c) * (b/c));
}