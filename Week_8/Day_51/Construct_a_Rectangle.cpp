#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long int n=3;
        long int arr[n];
        cin >> arr[0] >> arr[1] >> arr[2];      
        sort(arr, arr+n);
        if((arr[2] == arr[0]+arr[1]) || (arr[0] == arr[1] && arr[2]%2==0) || (arr[1] == arr[2] && arr[0]%2==0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}