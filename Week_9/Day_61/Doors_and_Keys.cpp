#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vector<char> v;
        bool fine = true;
        for(int i=0; i<s.length(); i++) {
            if(islower(s[i])) {
                v.push_back(s[i]);
            } else {
                char key = tolower(s[i]);
                if(find(v.begin(), v.end(), key) == v.end()) {
                    fine = false;
                    break;
                }
            }
        }
        if(fine)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}