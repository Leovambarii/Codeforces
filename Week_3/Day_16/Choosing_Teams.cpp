#include <iostream>

int main() {
    int n, k, x, participants=0;
    std::cin >> n >> k;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        if(5-x >= k)
            participants++;
    }
    std::cout << participants/3 << std::endl;

    return 0;
}