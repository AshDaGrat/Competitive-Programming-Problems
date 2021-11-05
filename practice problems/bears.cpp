//https://codeforces.com/problemset/problem/791/A

#include <iostream>
using namespace std;

int main(){
    int a,b,c = 0;
    cin >> a >> b;
    for (int i = 0; i < 1000; i++){
        a *= 3;
        b *= 2;
        c++;
        if (a > b)
        {
            cout << c;
            break;
        }
        
    }
}