//https://codeforces.com/problemset/problem/112/A

#include <iostream>
using namespace std;
 
int main(){
    string a,b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if (a.compare(b) == 0){
        cout << 0 << endl;
    }
    else if (a.compare(b) > 0){
        cout << 1 << endl;
    }
    else{
        cout << -1 << endl;
    }
}