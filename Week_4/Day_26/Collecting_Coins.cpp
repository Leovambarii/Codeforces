#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int a, b, c, n, diff;
        std::cin >> a >> b >> c >> n;
        int highest = std::max(std::max(a, b), c);
        diff = 3*highest-(a+b+c);
        n -= diff;
        if(n%3==0 && n>=0)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}