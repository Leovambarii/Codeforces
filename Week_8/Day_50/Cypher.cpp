#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, moves, d, u, diff;
        cin >> n;
        int arr[n];
        string s;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++) {
            cin >> moves >> s;
            for(int j=0; j<moves; j++) {
                if(s[j] == 'U') {
                    if(arr[i] == 0)
                        arr[i] = 9;
                    else
                        arr[i]--;
                } else
                    arr[i] = (arr[i]+1)%10;
            }
        }
        for(int el : arr)
            cout << el << " ";
        cout << endl;
    }
    return 0;
}