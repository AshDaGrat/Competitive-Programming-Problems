//https://codeforces.com/problemset/problem/580/A

#include <iostream>
using namespace std;

int main(){
    int a,count,max = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < a-1; i++){
        if (arr[i] <= arr[i+1]){
            count++;
            if (count > max){
                max = count;
            }
        }
        else {
            count=0;
        }
    }
    cout << max + 1;
}