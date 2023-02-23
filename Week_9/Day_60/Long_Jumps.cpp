#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, pos, sol=-1;
        cin >> n;
        long long arr[n];
        long long ans[n] = {0};
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=n-1; i>=0; i--) {
            pos = i;
            ans[i] = arr[i];
            pos += arr[i];
            if(pos < n)
                ans[i] += ans[pos];
        }
        for(int i=0; i<n; i++) {
            if(sol < ans[i])
                sol = ans[i];
        }
        cout << sol << endl;
    }
}