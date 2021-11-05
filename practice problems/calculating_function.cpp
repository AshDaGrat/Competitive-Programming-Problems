//https://codeforces.com/problemset/problem/486/A

#include <iostream>
using namespace std;

int main(){
    long long int a = 0;
    cin >> a;
    if (a % 2 == 0){
        cout <<  a/2;
    }
    else {
        cout << ((a+1)/2)*-1;
    }
}