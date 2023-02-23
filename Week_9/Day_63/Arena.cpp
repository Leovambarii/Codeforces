#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, count=0, temp=0, worst=INT_MAX;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            worst = min(worst, arr[i]);
        }
        if(n==1) {
            cout << 1 << endl;
            continue;
        }
        sort(arr, arr+n);
        for(int i=n-1; i>=0; i--) {
            if(arr[i] != worst)
                count++;
            else
                break;
        }
        cout << count << endl;
    }
    return 0;
}