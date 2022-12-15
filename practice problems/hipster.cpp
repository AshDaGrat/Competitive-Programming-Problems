//https://codeforces.com/problemset/problem/581/A

#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int count = 0;
    int b = 0;
    int count2 = 0;

    cin >> a >> b;
    
    if (a == b){
        count = a; 
        count2 = 0;
    }
    else {
        for (int i = 0; i < 100; i++){
            a--;
            b--;
            count++;
            if (a == 0|| b==0){
                count2 = (max(a,b))/2;
                break;
            }
        }
    }
    cout << count << " " << count2;
}