#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, count=0, leftmost1=0, rightmost1=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++) {
            if(arr[i] == 1) {
                leftmost1 = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--) {
            if(arr[i] == 1) {
                rightmost1 = i;
                break;
            }
        }
        for(int i=leftmost1; i<=rightmost1; i++) {
            if(arr[i] == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}