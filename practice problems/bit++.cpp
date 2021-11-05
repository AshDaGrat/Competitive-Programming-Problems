//https://codeforces.com/problemset/problem/282/A
#include <iostream>
using namespace std;
int main(){
    int a, c;
    string b;
    cin >> a;
    c = 0;
    for (int i; i < a; i++){
        cin >> b;
        if (b == "X++"|| b== "++X"){
            c++;
        }
        else {
            c--;
        }
    }
    cout << c;
}