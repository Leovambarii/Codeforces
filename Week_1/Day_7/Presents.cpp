#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int result[n];
    for(int i=0; i<n; i++) {
        int x;
        std::cin >> x;
        result[x-1] = i+1;
    }
    for(int x: result)
        std::cout << x << " ";

    return 0;
}