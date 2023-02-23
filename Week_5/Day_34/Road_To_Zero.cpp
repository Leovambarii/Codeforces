#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long long x, y, a, b, dollars=0;
        std::cin >> x >> y >> a >> b;
        if(2*a<b)
            dollars = a*(x+y);
        else
            dollars = b*std::min(x,y) + a*abs(x-y);
        std::cout << dollars << std::endl;
    }

    return 0;
}