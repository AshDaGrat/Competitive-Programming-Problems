//https://codeforces.com/problemset/problem/510/A

#include <iostream>
using namespace std;

int main(){
    int a, b= 0;
    cin >> a >> b;
    for (int i = 1; i <= a; i++){
        if (i % 2 == 1){
            for (int i = 0; i < b; i++){
                cout << "#";
            }
            cout << "\n";
        }
        else if (i % 4 == 2){
            for (int i = 1; i < b; i++){
                cout << ".";
            }
            cout << "#\n";
        }
        else{
            cout << "#";
            for (int i = 1; i < b; i++){
                cout << ".";
            }
            cout << "\n";
        }
    }
}