#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string line;
        cin >> line;
        int zeros=0, ones=0;
        for(int i=0; i<line.length(); i++) {
            if(line[i] == '1')
                ones++;
            else
                zeros++;
        }
        int ans = min(zeros, ones);
        if(ans%2 == 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    return 0;
}

