//https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int ans = 0;
    cin >> a;
    sort(a.begin(),a.end());
    for(int i = 1; i < a.length(); i++){
        if(a[i] == a[i-1]){
            ans++;
        }
    }
    if((a.length() - ans) % 2 == 1){
        cout << "IGNORE HIM!";
    }
    else{
        cout << "CHAT WITH HER!";        
    }
}