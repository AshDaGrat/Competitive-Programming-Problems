//https://codeforces.com/problemset/problem/467/A

#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int out = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> b >> c;
        if((c - b) >= 2){
            out++;
        }
    }
    cout << out;
}