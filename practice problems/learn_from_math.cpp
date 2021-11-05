//https://codeforces.com/problemset/problem/472/A

#include <iostream>
using namespace std;
 
int main(){
    int a = 0;
    cin >> a;
    if(a % 2 == 0){
        cout << 4 << " " << a - 4 << endl;
    }
    else{
        cout << 9 << " " << a - 9 << endl;
    }
}
