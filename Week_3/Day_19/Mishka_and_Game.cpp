#include <iostream>

int main() {
    int n, m, c, Mishka=0, Chris=0;
    std::cin >> n;
    while(n--) {
        std::cin >> m >> c;
        if(m==c)
            continue;
        else if(m>c)
            Mishka++;
        else
            Chris++;
    }
    if(Mishka > Chris)
        std::cout << "Mishka" << std::endl;
    else if(Chris > Mishka)
        std::cout << "Chris" << std::endl;
    else
        std::cout << "Friendship is magic!^^" << std::endl;

    return 0;
}