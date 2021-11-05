//https://codeforces.com/problemset/problem/443/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    string b;
    int c = 0;
    getline(cin, a);
    sort(a.begin(), a.end());
    for (int i = 0; i < a.length(); i++){
        if (a[i] <= 122 && a[i] >= 97){
            b += a[i];
        }
    }
    for (int j = 1; j < b.length(); j++){
        if (b[j] == b[j-1]){
            c++;
        }
    }
    cout << b.length()-c;
}