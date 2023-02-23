#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool possible = false;
    string s;
    string arr[n];
    for(int i=0; i<n; i++) {
        cin >> s;
        if(s[0]=='O' && s[1]=='O' && !possible) {
            possible = true;
            s[0] = '+';
            s[1] = '+';
            arr[i] = s;
        } else if(s[3]=='O' && s[4]=='O' && !possible) {
            possible = true;
            s[3] = '+';
            s[4] = '+';
            arr[i] = s;
        } else
            arr[i] = s;
    }
    if(possible) {
        cout << "YES" << endl;
        for(string s : arr)
            cout << s << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}