#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(x<10) {
            cout << x << endl;
            continue;
        }
        else if(x>45) {
            cout << -1 << endl;
            continue;
        }
        else {
            string s;
            for(int i=9; i>=1; i--) {
                if(x<=9 && x<=i) {
                    s += to_string(x);
                    x=0;
                    break;
                } else {
                    s += to_string(i);
                    x -= i;
                }
            }
            if(x) {
                cout << -1 << endl;
                continue;
            }
            reverse(s.begin(), s.end());
            cout << s << endl;
        }
    }
    return 0;
}