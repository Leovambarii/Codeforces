#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        string s, t, sol;
        int s_len, t_len, l, k=0;
        cin >> s >> t;
        if(s.length() == t.length()){
            if(s == t) 
            cout << s << endl;
            else 
                cout << -1 << endl;
            continue;
        }
        if(s.length() > t.length()) 
            swap(s,t);
        s_len = s.length();
        t_len = t.length();
        l = (s_len*t_len) / __gcd(s_len, t_len);
        for(int i=0; i<l; i++){
            sol += s[k];
            k++;
            k = k%s_len;
        }
        k=0;
        for(int i=0; i<l; i++) {
            if(sol[i] != t[k]) {
                sol = "-1";
                break;
            }
            k++;
            k = k%t_len;
        }
        cout << sol << endl; 
    }
    return 0;
}