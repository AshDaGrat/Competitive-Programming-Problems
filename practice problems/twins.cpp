//https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int sum,sum2,count = 0;
    cin >> a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+a);
    for(int i=a-1;i>=0;i--){
        sum2+=arr[i];
        count++; 
        if(sum2>(sum/2)){
            break;
        }
    }
    cout << count << endl;
}