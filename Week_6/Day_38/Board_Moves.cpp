#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, far=8, sum=0;
        cin >> n;
        if(n==1)
            cout << sum << endl;
        else {
            for(int i=1; i<=n/2; ++i) {
                sum += far*i;
                far += 8;
            }
            cout << sum << endl;
        }
    }
    return 0;
}