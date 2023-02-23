#include <bits/stdc++.h>

int main() {
    long int t, n;
    std::cin >> t;
    while(t--) {
        long int moves=0;
        std::cin >> n;
        while(n%6==0) {
            n /= 6;
            moves++;
        }
        while(n%3==0) {
            n /= 3;
            moves += 2;
        }
        if(n!=1)
            moves = -1;
        std::cout << moves << std::endl;
    }

    return 0;
}