#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c, highest, diff_a, diff_b, diff_c;
        cin >> a >> b >> c;
        highest = max(a, max(b, c));
        if(highest == 0) {
            cout << 1 << " " << 1 << " " << 1 << endl;
            continue;
        }
        diff_a = abs(a-highest);
        diff_b = abs(b-highest);
        diff_c = abs(c-highest);
        if(diff_a==0 && diff_a != diff_b && diff_a != diff_c)
            cout << 0 << " ";
        else
            cout << diff_a+1 << " ";
        if(diff_b==0 && diff_b != diff_a && diff_b != diff_c)
            cout << 0 << " ";
        else
            cout << diff_b+1 << " ";
        if(diff_c==0 && diff_c != diff_a && diff_c != diff_b)
            cout << 0 << " ";
        else
            cout << diff_c+1 << " ";
        cout << endl;
    }

    return 0;
}