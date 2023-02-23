#include <iostream>
#include <math.h>

int main() {
    long long int k, n, w, cost=0;
    std::cin >> k >> n >> w;
    for(int i=1; i<=w; i++)
            cost += k*i;
    if(cost > n)
        std::cout << cost - n << std::endl;
    else
        std::cout << 0 << std::endl;

    return 0;
}