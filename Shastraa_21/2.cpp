//https://www.hackerrank.com/contests/shaastra-junior/challenges/smallest-divisor-1-1

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    for (int i = 1; i <= a + 1; i++){
        if(a % i == 0 && b % i != 0){
            cout << i;
            break;
        }
    }
}