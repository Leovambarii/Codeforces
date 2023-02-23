#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, count=0,even=0, odd=0, diff=0;
        int arr[101];
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i]%2 == 0)
                even++;
            else
                odd++;
        }
        sort(arr, arr+n);
        for(int i=1; i<n; i++) {
            diff = abs(arr[i]-arr[i-1]);
            if(diff == 1)
                count++;
        }
        if(even%2 == 0 && odd%2 == 0)
            cout << "YES" << endl;
        else if(even%2 == 1 && odd%2 == 1) {
            if(count > 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else
            cout << "NO" << endl;
    }
    return 0;
}