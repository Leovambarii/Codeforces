#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int x_diff = abs(x1-x2);
    int y_diff = abs(y1-y2);
    if (x_diff != 0 && y_diff != 0 && x_diff != y_diff) {
        cout << -1 << endl;
        return 0;
    }
    if(x_diff != 0 && y_diff != 0) {
        x3 = x1;
        x4 = x2;
        y3 = y2;
        y4 = y1;
    } else if(x_diff != 0) {
        x3 = x1;
        x4 = x2;
        y3 = y1+x_diff;
        y4 = y2+x_diff;
    } else {
        x3 = x1+y_diff;
        x4 = x2+y_diff;
        y3 = y1;
        y4 = y2;
    }
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}