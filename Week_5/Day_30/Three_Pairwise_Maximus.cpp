#include <bits/stdc++.h>

int main() {
    long int t;
    std::cin >> t;
    while(t--) {
        long int x, y, z;
        std::cin >> x >> y >> z;
        if(x>y)
            std::swap(x,y);
        if(x>z)
            std::swap(x,z);
        if(y>z)
            std::swap(y,z);
        if(y==z)
            std::cout << "YES\n" << x << " " << x << " " << z << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}