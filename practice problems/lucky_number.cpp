//https://codeforces.com/contest/110/problem/A

#include <iostream>
using namespace std;

int main(){
    string a;
    bool c = false;
    int lucky = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++){
        if(a[i] == '4' || a[i] == '7'){
            lucky += 1;
        }
    }
    string b = to_string(lucky);
    for (int i = 0; i < b.length(); i++){
        if (b[i] == '7' || b[i] == '4'){
            c = true;
        }
        else{
            c = false;
            cout << "NO";
            break;
        }
    }
    if(c){
        cout << "YES";
    }
}