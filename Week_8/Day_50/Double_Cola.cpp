#include <bits/stdc++.h>
using namespace std;

int main() {
    string queue[] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
    long int n, sol, x=1;
    cin >> n;
    while(5*x < n) {
        n -= 5*x;
        x *= 2;
    }
    sol = (n-1)/x;
    cout << queue[sol] << endl;
    return 0;
}