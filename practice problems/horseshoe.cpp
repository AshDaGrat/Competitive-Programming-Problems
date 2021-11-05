//https://codeforces.com/problemset/problem/228/A

#include <iostream>
using namespace std;

int main(){
    int arr[4] = {0, 0, 0, 0};
    int count = 0;
    for (int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    for (int j = 0; j < 4; j++){
        if ( arr[j] == arr[j+1] || arr[j] == arr[j+2] || arr[j] == arr[j+3]){
            count ++;
        }
    }
    cout << count;
}   