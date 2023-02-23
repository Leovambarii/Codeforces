#include <bits/stdc++.h>
using namespace std;

long long int calculate(long long a) {
    return (a-1)*a/2;
}
int main() {
    long long int m, n, highest, lowest, x, y;
    cin >> n >> m;
    x = n/m;
    y = n%m;
    highest = calculate(n-m+1);
    lowest = calculate(x)*(m-y)+calculate(x+1)*y;
    cout << lowest << " " << highest << endl;
    return 0;
}