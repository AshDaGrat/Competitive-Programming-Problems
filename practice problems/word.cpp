//https://codeforces.com/problemset/problem/59/A

#include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;
    int b = 0;
    int c = 0;
    for (int i = 0; i < a.length(); i++){
        if (a[i] >= 97){
            c++;
        }
        else{
            b++;
        }
    }
    if(c >= b){
        for (int i = 0; i < a.length(); i++){
            a[i] = tolower(a[i]);
        }
    }
    else{
        for (int i = 0; i < a.length(); i++){
            a[i] = toupper(a[i]);
        } 
    }
    cout << a;
}