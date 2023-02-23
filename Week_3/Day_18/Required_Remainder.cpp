#include <iostream>

int main() {
    long long int x,y,n,t;
    std::cin >> t;
    for(int i=0; i<t; i++) {
        std::cin >> x >> y >> n;
        long long ans = 0;
        ans = n-n%x+y;
        if(ans <= n)
            std::cout << ans << std::endl;
        else
           std::cout << (n-n%x-(x-y)) << std::endl;
    }

    return 0;
}