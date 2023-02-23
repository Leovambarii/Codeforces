#include <bits/stdc++.h>
using namespace std;

int main() {
    long long d_1, d_2, d_3;
    cin >> d_1 >> d_2 >> d_3;
    long long first = d_1+d_2+d_3;
    long long second = 2*d_1+2*d_2;
    long long thrid = 2*d_1+2*d_3;
    long long fourth = 2*d_2+2*d_3;
    cout << min(first, min(second, min(thrid, fourth))) << endl;
    return 0;
}