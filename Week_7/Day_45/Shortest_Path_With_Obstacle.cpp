#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x_a, y_a, x_b, y_b, x_f, y_f, count;
        cin >> x_a >> y_a >> x_b >> y_b >> x_f >> y_f;
        count = abs(x_a-x_b)+abs(y_a-y_b);
        if ((x_a==x_b && x_a==x_f && y_f>min(y_a, y_b) && y_f<max(y_a, y_b)) || (y_a==y_b && y_a==y_f && x_f>min(x_a, x_b) && x_f<max(x_a, x_b))){
            count += 2;
        }
        cout << count << endl;;
    }
}