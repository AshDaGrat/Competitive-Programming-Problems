//https://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;

int main(){
    int t_cost, cost, m, n;
    cin >> cost >> m >> n; 
    for (int i = 1; i <= n; i++){
        t_cost += (cost*i);
    }
    if (t_cost > m){
        cout << t_cost - m;
    }
    else {
        cout << 0;
    }
}