#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int count=0, left=0, right=0;
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '1') {
                left = i;
                break;
            }
        }
        for(int i=s.length(); i>=left; i--) {
            if(s[i] == '1') {
                right = i;
                break;
            }
        }
        for(int i=left; i<right; i++) {
            if(s[i] != '1')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}