#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long int n;
        std::cin >> n;
        long int ones = n/3;
        long int twos = n/3;
        if(n%3 == 2)
            twos++;
        else if(n%3 == 1)
            ones++;
        std::cout << ones << " " << twos << std::endl;
    }

    return 0;
}