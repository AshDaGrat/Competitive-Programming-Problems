//https://codeforces.com/problemset/problem/266/B

#include <iostream>
using namespace std;

int main(){
    int a,b;
    string c;
    cin >> a >> b;
    cin >> c;
    for (int i = 0; i < b; i++){
        for (int j = 0; j < a;){
            if(c[j] == 'B' && c[j+1] == 'G'){
                swap(c[j],c[j+1]);
                j+=2;
            }
            else{
                j++;
            }
        }
    }
    cout << c;
}