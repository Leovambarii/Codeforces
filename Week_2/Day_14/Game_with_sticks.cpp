#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    if(n<m) {
        if(n%2==0)
            std::cout << "Malvika" << std::endl;
        else
            std::cout << "Akshat" << std::endl;
    } else {
        if(m%2==0)
            std::cout << "Malvika" << std::endl;
        else
            std::cout << "Akshat" << std::endl;
    }

    return 0;
}