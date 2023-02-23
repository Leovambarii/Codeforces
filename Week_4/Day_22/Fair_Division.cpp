#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n, x, one=0, sum=0;
        std::cin >> n;
        while(n--) {
            std::cin >> x;
            if(x == 1) {
                one++;
                sum++;
            }
            else
                sum+=2;
        }
        if(sum%2 == 0) {
            int half = sum/2;
            if(half%2 == 0)
                std::cout << "YES" << std::endl;
            else {
                if(one > 0)
                    std::cout << "YES" << std::endl;
                else
                    std::cout << "NO" << std::endl;
            }
        } else
            std::cout << "NO" << std::endl;

    }

    return 0;
}