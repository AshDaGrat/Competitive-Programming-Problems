#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int o, e, io, ie = 0;
    for (int i = 0; i<n; i++){
        if (arr[i]%2==0){
            e++;
            ie = i;
        }else{
            o++;
            io = i;
        }
    }
    if(o>e){
        cout << ie+1;
    }else{
        cout << io+1;
    }
    return 0;
}