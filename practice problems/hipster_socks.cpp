#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b = 0;
    cin >> a >> b;
    cout << min(a,b) << " " << floor(abs(a-b)/2); 
    return 0;
}