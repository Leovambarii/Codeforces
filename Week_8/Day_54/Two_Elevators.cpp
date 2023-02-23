#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c, first_diff, second_diff;
        cin >> a >> b >> c;
        first_diff = abs(a-1);
        if(b>c)
            second_diff = abs(b-1);
        else
            second_diff = abs(c-b)+abs(c-1);
        if(first_diff < second_diff)
            cout << 1 << endl;
        else if(first_diff > second_diff)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}