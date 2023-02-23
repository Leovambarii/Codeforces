#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, a, b;
        cin >> n >> m;
        int arr_a[n], arr_b[m];
        for(int i=0; i<n; i++)
            cin >> arr_a[i];
        for(int i=0; i<m; i++)
            cin >> arr_b[i];
        vector<int> vect;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(arr_a[i] == arr_b[j]) {
                    vect.push_back(arr_a[i]);
                    break;
                }
            }
            if(vect.size() == 1)
                break;
        }
        if(vect.size() == 0)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << vect.size() << " ";
            for(int el: vect)
                cout << el << endl;
        }
    }
    return 0;
}