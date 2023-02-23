#include <bits/stdc++.h>

int main() {
    long long t, l, r;
    std::cin >> t;
    while(t--) {
        long long x=0, y=0;
        std::cin >> l >> r;
        if(2*l <= r) {
            x = l;
            y = 2*l;
        } else {
            x = -1;
            y = -1;
        }
        std::cout << x << " " << y << std::endl;
    }

    return 0;
}