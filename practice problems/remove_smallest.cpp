//https://codeforces.com/problemset/problem/1399/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a = 0;
        cin >> a;
        int arr[a];
        for (int j = 0; j < a; j++){
            cin >> arr[j];
        }
        sort(arr, arr + a);
        int c = 0;
        for (int j = 0; j < a-1; j++){
            if (abs((arr[j]) - (arr[j+1])) <= 1){
                c++;
            }
        }
        if (a - c == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}