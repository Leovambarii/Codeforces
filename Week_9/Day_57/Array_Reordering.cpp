#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, count=0;
        cin >> n;
        vector<int>v, even, odd;
        for(int i=0; i<n; i++) {
            cin >> a;
            if(a%2 == 0)
                even.push_back(a);
            else
                odd.push_back(a);
        }
        for(int i : even)
            v.push_back(i);
        for(int i : odd)
            v.push_back(i);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++)
                if(__gcd(v[i], 2*v[j]) > 1)
                    count++;
        }
        cout << count << endl;
    }
    return 0;
}