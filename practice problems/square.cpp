//https://codeforces.com/problemset/problem/1351/B

#include <iostream>
using namespace std;

int main(){
    int t, a, b, c, d;
    cin >> t;
    while (t--){
        cin >> a >> b;
        cin >> c >> d;
        if((a==c && (b+d)==a) || (a==d && (b+c)==a) || (b==c && (a+d)==b) || (b==d && (a+c)==b)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}