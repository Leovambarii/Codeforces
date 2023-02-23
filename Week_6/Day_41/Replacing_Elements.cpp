#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, d;
        cin >> n >> d;
        int arr[n];
        for (int i=0; i<n; i++)
            cin >> arr[i];
        vector<int> vect_1, vect_2;
        for (int i=0; i<n; i++) {
            if(arr[i] <= d)
                vect_1.push_back(arr[i]);
            else
                vect_2.push_back(arr[i]);
        }
        if(vect_2.size() == 0)
            cout << "YES" << endl;
        else {
            sort(vect_1.begin(), vect_1.end());
            if(vect_1.size() >= 2) {
                if(vect_1[0]+vect_1[1] <= d)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            } else
                cout << "NO" << endl;
        }
    }
}