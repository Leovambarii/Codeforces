#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        vector<int>participants(n+1), indexes(n+1);
        for(int i=0; i<n; i++){
            cin >> x;
            participants[x]++;
            indexes[x] = i+1;
        }
        int index = -1;
        for(int i=0; i<=n; i++){
            if(participants[i] == 1){
                index = indexes[i];
                break;
            }
        }
        cout << index << endl;
    }
    return 0;
}