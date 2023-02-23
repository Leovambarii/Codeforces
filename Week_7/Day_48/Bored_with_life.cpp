#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, sol=1;
    cin >> a >> b;
    int minimum = min(a, b);
    for(int i=1; i<=minimum; i++)
        sol *= i;
    cout << sol << endl;
    return 0;
}