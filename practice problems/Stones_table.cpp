#include <iostream>
using namespace std;

int main(){
    int a = 0;
    string b;
    cin >> a >> b;
    int c = 0;
    for(int i = 0; i<a-1; i++){
        if (b[i] == b[i+1]){
            c++;
        }
    }
    cout << c;
    return 0;
}