//https://codeforces.com/contest/136/problem/A

#include <iostream>
using namespace std;

int main() {
    int a, b, arr[101];
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cin >> b;
        arr[b] = i;
    }
    for (int i = 1; i <= a; i++) {
        cout << arr[i] << " ";
    }
}