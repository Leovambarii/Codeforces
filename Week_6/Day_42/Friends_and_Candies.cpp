#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, sum=0, count=0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum%n == 0) {
            float medium = (float)sum / (float)n;
            for(int i=0; i<n; i++) {
                if(arr[i] > medium)
                    count++;
            }
            cout << count << endl;
        } else
            cout << -1 << endl;

    }
    return 0;
}