//https://codeforces.com/problemset/problem/405/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0;  
    cin >> a;
    int arr[a] = {};
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    sort(arr, arr + a);
    for (int i = 0; i < a; i++){
        cout << arr[i] << " ";
    }
}