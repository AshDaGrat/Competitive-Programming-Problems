//https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
#include<string>
using namespace std;
 
int main(){
    string guest, host, door;
    cin >> guest >> host >> door;
    string total = host + guest;
    sort (door.begin(), door.end());
    sort (total.begin(), total.end());
    if (total.length() == door.length()) {
        if(total == door){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
}