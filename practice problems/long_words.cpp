//https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;
int main(){
    int a;
    string b;
    cin >> a;
    for (int j = 0; j<a; j++){
        cin >> b;
        if (b.length() > 10){
            cout << b[0] << b.length() - 2 << b[b.length() - 1] << endl;
        }
        else {
            cout << b << endl;
        }
    }
}