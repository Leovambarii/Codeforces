#include <bits/stdc++.h>
using namespace std;

int main() {
    int count=0, x=0, y=0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == 'Q') {
            count += x;
            y++;
        } else if(s[i] == 'A')
            x += y;
    }
    cout << count << endl;
    return 0;
}