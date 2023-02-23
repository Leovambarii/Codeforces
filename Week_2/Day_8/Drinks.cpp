#include <iostream>

int main() {
    int n, p;
    double sum = 0;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> p;
        sum += p;
    }
    std::cout << sum/n << std::endl;

    return 0;
}