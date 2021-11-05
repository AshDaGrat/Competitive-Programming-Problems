//https://codeforces.com/problemset/problem/118/A

#include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++){
        a[i] = tolower(a[i]);
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'y'){
            a[i] = 0;
        }
    }
    for (int i = 0; i < a.length(); i++){
        if(a[i] == 0){
        }
        else{
            cout << "." << a[i];
        }
    }
}