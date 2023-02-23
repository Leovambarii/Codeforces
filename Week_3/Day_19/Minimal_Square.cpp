#include <iostream>
#include <math.h>

int main() {
    int t, a, b;
    std::cin >> t;
    while(t--) {
        std::cin >> a >> b;
        if(a>b)
            std::swap(a,b);
        std::cout << std::max(2*a, b)*std::max(2*a, b) << std::endl;
    }

    return 0;
}