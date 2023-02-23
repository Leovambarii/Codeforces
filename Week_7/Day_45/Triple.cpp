#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sol=-1;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        for(int i=0; i<n-2; i++) {
            if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]) {
                sol = arr[i];
                break;
            }
        }
        if(sol == -1)
            cout << -1 << endl;
        else
            cout << sol << endl;
    }
    return 0;
}