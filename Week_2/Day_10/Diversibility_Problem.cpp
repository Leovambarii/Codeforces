#include <iostream>

int main() {
    long int t, a, b;
    std::cin >> t;
    int x[t], y[t];
    for(int i=0; i<t; i++)
        std::cin >> x[i] >> y[i];
    for(int i=0; i<t; i++) {
        int steps = 0;
        if(x[i]%y[i] == 0)
            std::cout << steps << std::endl;
        else {
            std::cout << abs(y[i]-x[i]%y[i]) << std::endl;
        }
    }
    return 0;
}