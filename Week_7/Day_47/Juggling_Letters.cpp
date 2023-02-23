#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n;
        map<char, int> letters;
        for(int i=0; i<n; i++) {
            cin >> s;
            for(int i=0; i<s.length(); i++)
                letters[s[i]]++;
        }
        bool equal_letters = true;
        for(auto el : letters) {
            if(el.second%n != 0) {
                equal_letters = false;
                break;
            }
        }
        if(equal_letters)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}