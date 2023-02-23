#include <iostream>

int main() {
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int person_salt = p/(n*np);
    int person_drink = k*l/(n*nl);
    int person_slice = c*d/n;
    std::cout << std::min(std::min(person_salt, person_drink), person_slice) << std::endl;

    return 0;
}