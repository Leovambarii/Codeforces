#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, number=1, count=0, most=1;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a;
            if(a == number) {
                count++;
                if(most < count)
                    most = count;
            } else {
                count = 1;
                number = a;
            }
        }
        cout << most << endl;
    }
    return 0;
}