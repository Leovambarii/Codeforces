#include <iostream>

int main() {
    int n,h, x, width=0;
    std::cin >> n >> h;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        if(x>h)
            width+=2;
        else
            width++;
    }
    std::cout << width << std::endl;

    return 0;
}