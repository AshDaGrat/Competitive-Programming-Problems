//https://codeforces.com/problemset/problem/427/A

#include <iostream>
using namespace std;

int main(){
    int a, v, b = 0;
    int c = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> v;
        b += v; 
        if (b < 0){
            b = 0;
            c++;
        }
    }
    cout << c;
}