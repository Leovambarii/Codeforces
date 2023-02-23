#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n=0, m=0;
        map<char, int> letters;
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++)
            letters[s[i]]++;
        for(auto el : letters) {
            if(el.second > 1)
                m++;
            else if(el.second == 1)
                n++;
        }
        cout << m+n/2 << endl;
    }
    return 0;
}