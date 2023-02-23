#include <iostream>

int main() {
    int n,x;
    std::cin >> n;
    bool hard = false;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        if(x == 1) 
            hard = true;
    }
    if(hard)
        std::cout << "HARD" << std::endl;
    else
      std::cout << "EASY" << std::endl;  

    return 0;
}