//https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

int main(){
    int a, b = 0;
    cin >> a >> b;
    for (int i = 0; i < b; i++){
        if(a % 10 == 0){
            a /= 10;
        }
        else{
            a -= 1;
        }
    }
    cout << a;
}