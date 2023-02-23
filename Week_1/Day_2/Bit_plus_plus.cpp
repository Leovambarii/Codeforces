#include <iostream>

int main() {
    int x = 0, n;
    std::cin >> n;
    if(n < 1 || n > 150) {
        std::cout << "\nWrong Input!\n";
        return 0;
    }
    std::string line;
    for(int i=0; i<n; i++) {
        std::cin >> line;
        if(line[1] == '+')
            x++;
        else
            x--;
    }
    std::cout << x << std::endl;

    return 0;
}