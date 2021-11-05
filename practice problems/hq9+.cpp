//https://codeforces.com/contest/133/problem/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    bool b = false;
    cin >> a;
    if(a.find("H") != string::npos){
        b = true;
    }
    if(a.find("Q") != string::npos){
        b = true;
    }
    if(a.find("9") != string::npos){
        b = true;
    }

    if(b){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}