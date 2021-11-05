//https://codeforces.com/problemset/problem/268/A

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a[t];
    int b[t];
    int output = 0;
    for (int i = 0; i < t; i++){
        cin >> a[i] >> b[i];
    }
    for (int j = 0; j < t; j++){
        for (int k = 0; k < t; k++){
                if (a[j] == b[k])
                if(j != k)
                output++;
        }
    }
    cout << output;
}