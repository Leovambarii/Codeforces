#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    if(n%2 == 1)
        std::cout << -1 << std::endl;
    else {
        std::cout << "2 1";
        for(int i=3; i<n; i+=2)
            std::cout << " " << i+1 << " " << i;
        std::cout << std::endl;
    }
    return 0;
}