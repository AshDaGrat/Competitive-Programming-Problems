//https://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b;
    int arr[a];
    c = 0;

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++){
        if(arr[i]>=arr[b-1] && arr[i]!=0){
			c++;
        }
    }
    cout << c;
}