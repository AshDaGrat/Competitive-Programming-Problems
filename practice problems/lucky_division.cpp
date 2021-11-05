//https://codeforces.com/problemset/problem/122/A

#include <iostream>
using namespace std;

int main(){
    int a = 0; 
    bool b;
    cin >> a;
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int i = 0; i < 14; i++){
        if (a % arr[i] == 0){
            b = true;
            break;
        }
        else {
            b = false;
        }
    }
    if (b){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}