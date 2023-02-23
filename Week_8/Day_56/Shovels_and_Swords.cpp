#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        if(a > b)
            swap(a,b);
        if(2*a <= b)
            cout << a << endl;
        else
            cout << (a+b)/3 << endl;
    }
    return 0;
}