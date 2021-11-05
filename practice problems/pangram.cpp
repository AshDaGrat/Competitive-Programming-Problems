//https://codeforces.com/problemset/problem/520/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int b = 0;
    int c = 0;
    cin >> b >> a;
    for (int i = 0; i < b; i++) {
        a[i] = tolower(a[i]);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < b; i++) {
        if(a[i] != a[i+1]){
            c++;
        }
    }
    if(c == 26){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}