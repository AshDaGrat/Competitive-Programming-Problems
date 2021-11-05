//https://codeforces.com/problemset/problem/69/A

#include<iostream>
using namespace std;
 
int main(){
    int n;
    int x = 0, y = 0, z = 0, x1, x2, x3;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> x1;
        cin >> x2;
        cin >> x3;
        x += x1;
        y += x2;
        z += x3;
    }
    if(x == 0 && y == 0 && z == 0){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}