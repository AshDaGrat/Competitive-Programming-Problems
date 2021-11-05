//https://codeforces.com/problemset/problem/339/A

#include <iostream>
using namespace std;
 
int main() {
    string n1, n2, n3, n, str;
    cin >> str;
    for(int i = 0; i < str.length();i++ ){
        switch(str[i]){
            case '1': n1 += "1+"; break;
            case '2': n2 += "2+"; break;
            case '3': n3 += "3+"; break;
        }
    }
    n = n1+n2+n3;
    cout << n.substr(0, str.length()) << endl;
}