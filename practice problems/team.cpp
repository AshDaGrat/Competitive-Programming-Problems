//https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    e = 0;
    cin >> a; 
    for (int i = 0; i<a; i++){
        cin >> b >> c >> d;
        if (b + c + d >= 2){
            e++;
        }
    }
    cout << e;
}