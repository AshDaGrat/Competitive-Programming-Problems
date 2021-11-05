//https://www.hackerrank.com/contests/shaastra-junior/challenges/code-encode
//this solution works for 5/14 test cases

#include <iostream>
using namespace std;

int main(){
    char alphabet[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int a = 0;
    int c = 0;
    string b;
    cin >> a >> b;
    for (int i = 0; i <= b.length(); i++){
        b[i] += i + 1;
        if (b[i] > 90){
            b[i] -= 26;
        }
    }
    for (int i = 0; i < b.length(); i++){
        int c = int(b[i]) - 64;
        c *= a;
        c %= 26;
        b[i] = alphabet[c - 1];
    }
    cout << b;
}