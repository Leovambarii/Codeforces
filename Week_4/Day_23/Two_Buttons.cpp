#include <bits/stdc++.h>

int main() {
    long int n, m, moves=0;
    std::cin >> n >> m;
    long int value = n;
    while(n!=m) {
        if(m > n) {
            if(m%2==0) {
                m /= 2;
                moves++;
            } else {
                m++;
                moves++;
            }
        } else if(n>m) {
            m++;
            moves++;
        }
    }
    std::cout << moves << std::endl;

    return 0;
}