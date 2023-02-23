#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, visited=0;
        cin >> x;
        int arr[3];
        for(int i=0; i<3; i++)
            cin >> arr[i];
        for(int i=0; i<3; i++) {
            if(x != 0) {
                visited++;
                x = arr[x-1];
            }
        }
        if(visited == 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}