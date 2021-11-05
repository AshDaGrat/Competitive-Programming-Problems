//https://codeforces.com/problemset/problem/266/A

#include <iostream>
using namespace std;

int main(){
    int a;
    string b;
    int c = 0;
    cin >> a >> b;
    for(int i = 0; i < a; i++){
        if (b[i] == b[i+1]){
            c++;
        }
    }
    cout << c;
}