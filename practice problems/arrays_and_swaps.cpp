//https://codeforces.com/problemset/problem/1353/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                
int main(){
    int t = 0;;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        int a[n], b[n], sum = 0;
        for (int j = 0; j < n; j++){
            cin >> a[j];  
        }
        for (int j = 0; j < n; j++){
            cin >> b[j];
        }
        sort(a, a + n);
        sort(b, b + n);
        for (int l = 0; l < k; l++){
            if (a[l] < b[n-1-l]){
                swap(a[l], b[n-1-l]);
            }  
        }
        for (int m = 0; m < n; m++){
            sum+=a[m];
        }
        cout << sum << endl;
    }
}