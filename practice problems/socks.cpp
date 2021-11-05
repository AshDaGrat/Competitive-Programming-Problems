//https://codeforces.com/problemset/problem/460/A

#include <iostream>
using namespace std;

int main(){
    int a,b = 0;
    int count = 0;
    cin >> a >> b;
    for (int i = 1; i < 1000; i++){
        a--;
        count++;
        if (i%b == 0){
            a++;
        }
        if (a == 0){
            cout << count;
            break;
        }
    }
}