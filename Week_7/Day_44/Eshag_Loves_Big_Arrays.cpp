#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sum=0, count=0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr+n);
        for(int i=1; i<n; i++) {
            if(arr[i] > arr[0])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}