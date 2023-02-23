#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sum=0;
        string line;
        cin >> n;
        cin >> line;
        vector<char> vect;
        for(int i=0; i<n; i++) {
            bool found = false;
            for(int j=0; j<vect.size(); j++) {
                if(vect[j] == line[i]) {
                    found = true;
                    break;
                }
            }
            if(!found) {
                sum += 2;
                vect.push_back(line[i]);
            } else
                sum++;
        }
        cout << sum << endl;
    }

    return 0;
}