#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, sum=0;
    cin >> a >> b >> c >> d;
    int min_256 = min(a, min(c, d));
    sum += min_256*256;
    a -= min_256;
    int min_32 = min(a, b);
    sum += min_32*32;
    cout << sum << endl;
    return 0;
}