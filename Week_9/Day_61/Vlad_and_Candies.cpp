#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        if(n == 1) {
            if(arr[0] == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        sort(arr, arr+n);
        if(arr[n-1]-arr[n-2] <= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
    }
    return 0;
}