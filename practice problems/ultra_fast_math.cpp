//https://codeforces.com/problemset/problem/61/A

#include <iostream>
using namespace std;

int main(){
    string a,b, output;
    output = "";
    cin >> a;
    cin >> b;
    for (int i =0; i < a.length(); i++){
        if (a[i] == b[i]){
            output+= "0";
        }
        else {
            output+= "1";
        }
    }
    cout << output;
}