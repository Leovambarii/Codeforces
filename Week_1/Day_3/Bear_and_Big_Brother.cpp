#include <iostream>

int main(int argc, char const *argv[]) {
    int a,b, years=0;
    std::cin >> a >> b;
    if(a < 1 || b < 1 || a > 10 || b > 10) {
        std::cout << "\nWrong Input!\n";
        return 0;
    }
    while(a <= b) {
        years++;
        a = 3*a;
        b = 2*b;
    }
    std::cout << years << std::endl;

    return 0;
}
