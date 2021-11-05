//https://codeforces.com/problemset/problem/996/A

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int a = 0;
    cin >> n;

    a += n/100;
    n = n%100;
    a += n/20;
    n = n%20;    
    a += n/10;
    n = n%10;    
    a += n/5;
    n = n%5;
    a += n/1;
    n = n%1;    

    cout << a;
}