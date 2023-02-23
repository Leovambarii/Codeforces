#include <iostream>
#include <vector>

int main() {
    int n, x_, y_, z_, x=0, y=0, z=0;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> x_ >> y_ >> z_;
        x += x_;
        y += y_;
        z += z_;

    }

    std::cout << (x==0 && y==0 && z==0 ? "YES" : "NO") << std::endl;

    return 0;
}