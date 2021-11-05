//https://codeforces.com/problemset/problem/451/A

#include <iostream>
using namespace std;

int main(){
    int a,b = 0;
    cin >> a >> b;
    int c = min(a,b);
    if (c%2 == 0){
        cout << "Malvika";
    }
    else {
        cout << "Akshat";
    }
}