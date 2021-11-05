//https://codeforces.com/problemset/problem/96/A

#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int len = 0;
    int count = 0;
    
    for(int i = 1; i<s.length(); i++) {
        if(s[i] == s[i-1]) {
            count++;
            len = max(len, count);
        } else {
            count = 0;
        }
    }
    if(len>=6){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}