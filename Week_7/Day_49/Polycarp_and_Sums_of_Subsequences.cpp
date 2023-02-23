#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n=7;
        long long arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cout << arr[0] << " " << arr[1] << " ";
        if(arr[n-1] != arr[0]+arr[1]+arr[2])
            cout << arr[3] << endl;
        else
            cout << arr[2] << endl;
    }

    return 0;
}