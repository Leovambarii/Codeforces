#include <iostream>

int main() {
    int n, x, a=0, b=0, c=0;;
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> x;
        a += x;
    }
    for (int i=0; i<n-1; i++) {
        std::cin >> x;
        b += x;
    }
    for (int i=0; i<n-2; i++) {
        std::cin >> x;
        c += x;
    }
    std::cout << a-b << std::endl;
    std::cout << b-c << std::endl;
    return 0;
}