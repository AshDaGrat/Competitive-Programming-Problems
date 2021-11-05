//https://codeforces.com/problemset/problem/344/A

#include <iostream>
using namespace std;

int main(){
    int n,i,count = 0;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    for(i = 0; i < n; i++){
        if(a[i] != a[i+1]){
            count++;
        }
    }
    cout << count << endl;
}