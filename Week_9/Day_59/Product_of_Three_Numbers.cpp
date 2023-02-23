#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        bool found = false;
        for(int a=2; a*a<=n; a++) {
            if(n%a == 0) {
                int d = n/a;
                for(int b=a+1; b*b<d; b++) {
                    if(d%b == 0) {
                        cout << "YES\n" << a << " " << b << " " << d/b << endl;
                        found = true;
                        break;
                    }
                }
                if(found)
                    break;
            }
        }
        if(!found)
            cout << "NO" << endl;
        
    }
    return 0;
}