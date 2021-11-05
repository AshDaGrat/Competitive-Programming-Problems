//https://codeforces.com/problemset/problem/1335/A

#include <iostream>
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a = 0;
        cin >> a;
        if (a % 2 == 0){
            cout << (a/2)-1 << endl;
        }
        else{
            cout << (a-1)/2 << endl;
        }
    }
}