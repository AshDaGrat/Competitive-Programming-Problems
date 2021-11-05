//https://codeforces.com/problemset/problem/25/A

#include <iostream>
using namespace std;

int main()
{
    int o = 0, e = 0;
    int io = 0;
    int ie = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int z;
        cin >> z;
        if (z % 2 == 0){
            e++;
            ie = i;
        }
        else{
            o++;
            io = i;
        }
    }
    if (e < o)
        cout << ie + 1 << endl;
    else
        cout << io + 1 << endl;
}