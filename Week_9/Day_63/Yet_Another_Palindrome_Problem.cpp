#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, arr[5001];
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        bool found = false;
        for(int i=0; i<n; i++) {
            for(int j=i+2; j<n; j++) {
                if(arr[i] == arr[j]) {
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }
        if(found)
            cout<<"YES" << endl;
        else
            cout<<"NO" << endl;
    }
    return 0;
}