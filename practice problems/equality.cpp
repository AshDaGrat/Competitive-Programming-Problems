//https://codeforces.com/problemset/problem/758/A

#include <iostream>
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    int a[t];
    int max = 0;
    int m = 0;
    for (int i = 0; i < t; i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
        }
    }
    for (int i = 0; i < t; i++){
        m += max - a[i];
    }
    cout << m;
}