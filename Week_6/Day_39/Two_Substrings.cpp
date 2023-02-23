#include<bits/stdc++.h>
using namespace std;

int main() {
    long long m, tc, num, t=1;
    string s;
    cin >> s;
    bool found_ab = false, found_ba = false;
    for(long long i=0; i<s.length(); i++) {
        if(s[i] == 'A' && s[i+1] == 'B' && found_ab == false) {
            found_ab = true;
            i++;
        }
        else if(s[i] == 'B' && s[i+1] == 'A' && found_ab)
            found_ba = true;
    }
    if(found_ba) {
        cout << "YES" << endl;
        return 0;
    }
    found_ab = false, found_ba = false;
    for(long long i=0; i<s.length(); i++) {
        if(s[i] == 'B' && s[i+1] == 'A' && found_ba == false) {
            found_ba = true;
            i++;
        }
        else if(s[i] == 'A' && s[i+1] == 'B' && found_ba)
            found_ab = true;
    }
    if(found_ab)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}