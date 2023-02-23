#include <bits/stdc++.h>

int main() {
    int y, w;
    std::cin >> y >> w;
    int numerator = 6-std::max(y,w)+1;
    int denominator = 6;
    if(numerator > 5)
        std::cout << "1/1" << std::endl;
    else if(numerator == 0)
        std::cout << "0/1" << std::endl;
    else {
        if(numerator%3==0 && denominator%3==0) {
            numerator /= 3;
            denominator /= 3;
        }
        if(numerator%2==0 && denominator%2==0) {
            numerator /= 2;
            denominator /= 2;
        }
        std::cout << numerator << "/" << denominator << std::endl;
    }
    return 0;
}