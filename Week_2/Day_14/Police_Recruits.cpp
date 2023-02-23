#include <iostream>

int main() {
    int n, x, police=0, crimes=0;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        if(x<0) {
            if(police == 0)
                crimes++;
            else
                police--;
        } else
            police += x;
    }
    std::cout << crimes << std::endl;

    return 0;
}