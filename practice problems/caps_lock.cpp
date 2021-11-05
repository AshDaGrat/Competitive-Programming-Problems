//https://codeforces.com/problemset/problem/131/A

#include <iostream>
using namespace std;

int main(){
    string a;
    bool x = true;
    cin >> a;
    for (int i = 1; i < a.length(); i++){
        if(a[i] > 91){
            x = false;
            cout << a;
            break;
        }
    }
    if(a[0] >= 91 && x){
        a[0] = toupper(a[0]);
        for (int i = 1; i < a.length(); i++){
            a[i] = tolower(a[i]);
        }
        cout << a;    
    }
    else if(a[0] <= 91 && x){
        for (int i = 0; i < a.length(); i++){
            a[i] = tolower(a[i]);
        }
        cout << a; 
    }
}