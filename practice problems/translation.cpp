//https://codeforces.com/problemset/problem/41/A

#include <iostream>
using namespace std;

int main(){
    string a;
    string b;
    cin >> a >> b;
    string c;
    for (int i = a.length() - 1; i >= 0; i--){
        c += a[i];
    }
    if(c == b){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}