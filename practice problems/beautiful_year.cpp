//https://codeforces.com/problemset/problem/271/A

#include <iostream>
using namespace std;

int main(){
    int a;
    int output;
    cin >> a;
    for (int i = 1; i < 8000; i++){
        a += i;
        int b = a % 10;
        int c = a / 10 % 10;
        int d = a / 10 / 10 % 10;
        int e = a / 10 / 10 / 10 % 10;
        if (b != c && b != d && b != e && c != d && c != e && d != e){
            output = a;
            break;
        }
        else {
            a -= i;
        }
    }
    cout << output;
}