#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long long x;
        std::cin >> x;
        int a=0, b=0;
        if(x%2==0) {
            a=x/2;
            b=x/2;
        } else {
            a=x-1;
            b=1;
        }
        std::cout << a << ' ' << b << std::endl;
    }

    return 0;
}