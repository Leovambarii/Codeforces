#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, letter=0;
    cin >> n;
    string s, sol;
    cin >> s;
    for(int i=0; i<s.length(); i+=letter) {
        sol += s[i];
        letter++;
    }
    cout << sol << endl;
    return 0;
}