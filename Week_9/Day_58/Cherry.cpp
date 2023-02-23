#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, a;
        cin >> n;
        long long arr[n];
        for(long long i=0; i<n; i++)
            cin >> arr[i];
        long long sol = INT_MIN;
        for(int i=0; i<n-1; i++)
            sol = max(arr[i]*arr[i+1], sol);
        cout << sol << endl;
    }
    return 0;
}