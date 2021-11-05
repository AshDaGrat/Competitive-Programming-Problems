//https://codeforces.com/problemset/problem/1328/A

#include <iostream>
using namespace std;

int main(){
    long long int t = 0;
    long long int a = 0;
    long long int b = 0;
    long long int count = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        if (a % b == 0)
            cout << '0' << endl;
        else
            cout << b - a % b << endl;
    }
}