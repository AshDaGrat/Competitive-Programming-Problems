//https://codeforces.com/problemset/problem/116/A
 
#include <iostream>
using namespace std;
 
int main(){
    int a,b,c = 0;
    int m = 0;
    int count = 0;
    cin >> a; 
    for (int i = 0; i < a; i++){
        cin >> b >> c;
        count += c;
        count -= b;
        if (count > m){
            m = count;
        }
    }
    cout << m << endl;
}