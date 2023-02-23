#include <iostream>

int main() {
    int n, p, q, sum=0;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> p >> q;
        if(q-p >= 2)
            sum++;
    }
    std::cout << sum << std::endl;

    return 0;
}