#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;

    if(m < 1 || n < 1 || m > 16 || n > 16) {
        std::cout << "\nWrong Input!\n" << std::endl;
        return 0;
    }

    std::cout << (n*m)/2 << std::endl;

    return 0;
}