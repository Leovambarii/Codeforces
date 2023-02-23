#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int even=0, odd=0;
        for(int i=0; i<n; i+=2) {
            if(arr[i]%2 == 0)
                even++;
            else
                odd++;
        }
        if(even>0 && odd>0) {
            cout << "NO" << endl;
            continue;
        }
        even=0, odd=0;
        for(int i=1; i<n; i+=2) {
            if(arr[i]%2 == 0)
                even++;
            else
                odd++;
        }
        if(even>0 && odd>0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}