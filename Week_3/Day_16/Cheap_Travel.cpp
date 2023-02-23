#include <iostream>

int main() {
    int n, m, a, b, sum=0;
    std::cin >> n >> m >> a >> b;
    if(m*a <= b)
        std::cout << n*a << std::endl;
    else
        std::cout << (n/m)*b + std::min((n%m)*a, b);

    return 0;
}