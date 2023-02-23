#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long int n;
        cin >> n;
        string s;
        if(n==1)
            cout << -1 << endl;
        else {
            for(int i=1; i<n; i++)
                s += '9';
            s += '4';
            cout << s << endl;
        }
    }   
    return 0;
}