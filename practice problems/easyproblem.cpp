//https://codeforces.com/problemset/problem/1030/A

#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> b; 
        c += b;
    }
    if(c > 0){
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
}