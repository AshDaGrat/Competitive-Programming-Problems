//https://codeforces.com/problemset/problem/677/A

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int h = 0;
    int a = 0;
    int w = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++){
        cin >> a;
        w++;
        if(a > h){
            w++;
        }
    }
    cout << w;
}