// https://codeforces.com/problemset/problem/318/A

#include <iostream>
using namespace std;

int main(){
    long long int a,b;
    cin >> a >> b;
    if (a%2 ==1){
        a+=1;
    }
    if (b > (a/2)){
        cout << 2*(b - (a/2));
    }
    else{
        cout << (b*2)-1;
    }
}