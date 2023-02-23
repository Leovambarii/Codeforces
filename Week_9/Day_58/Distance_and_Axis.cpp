#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, count=0;
        cin >> n >> k;
        count += max(0, k-n);
        n += count;
        if(k%2 == 1) {
            if(n%2 == 0)
                count++;
        } else if(k%2 == 0) {
            if(n%2 == 1)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}