#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, count=0, number=1;
        cin >> n;
        while(n>0) {
            n -= number;
            number += 2;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}