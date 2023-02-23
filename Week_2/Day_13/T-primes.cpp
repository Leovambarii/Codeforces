#include <iostream>
#include <math.h>

bool isPrime(long long n) {
    if(n < 2)
        return false;
    else if(n == 2)
        return true;
    long long limit = sqrt(n);
    if(n%2==0)
        return false;
    for(int j=3; j<=limit; j+=2) {
        if(n%j==0)
            return false;
    }
    return true;
}

int main() {
    long long x;
    int t;
    std::cin >> t;
    for(int i=0; i<t; i++) {
        std::cin >> x;
        long long sqr = sqrt(x);
        if((sqr*sqr == x) && (isPrime(sqr) == true))
            std::cout<<"YES\n";
        else
            std::cout<<"NO\n";
    }

    return 0;
}