#include <bits/stdc++.h>
using namespace std;

int main() {
    string name = "Timur";
    int t;
    cin >> t;
    while(t--) {
        int n;
        string line;
        bool is_fine = true;
        cin >> n >> line;
        if(line.length() != name.length()) {
            cout << "NO" << endl;
            continue;
        }
        for(int i=0; i<n; i++) {
            if(line.find(name[i]) == string::npos) {
                is_fine = false;
                break;
            }
        }
        if(is_fine)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}