#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int ones=0, zeroes=0;
        int x = s.length();
        for(int i=0; i<x; i++) {
            if(s[i] == '0')
                zeroes++;
            else
                ones++;
        }
        if(zeroes == ones)
            cout << ones-1 << endl;
        else if(zeroes > ones)
            cout << ones << endl;
        else
            cout << zeroes << endl;
    }
    return 0;
}