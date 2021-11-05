//https://codeforces.com/problemset/problem/705/A

#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cin >> a;
    string output;
    for (int i = 1; i < a; i++){
        if(i%2 == 1){
            output += "I hate ";
        }
        else{
            output += "I love ";
        }
        output += "that ";
    }
    if (a%2 == 0){
        output += "I love it";
    }
    else{
        output += "I hate it";
    }
    cout << output;
}