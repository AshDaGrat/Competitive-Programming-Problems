//https://codeforces.com/problemset/problem/1360/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b = 0;
        int least = 10000;
        cin >> a;
        int arr[a];
        for (int j = 0; j < a; j++){
            cin >> arr[j];
        }
        sort(arr, arr+a);
        for (int j = 0; j < a-1; j++){
            b = arr[j+1] - arr[j];
            if (b < least){
                least = b;
            }
        }
        cout << least << endl;
    }
}