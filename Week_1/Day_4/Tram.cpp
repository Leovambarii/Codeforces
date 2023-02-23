#include <iostream>

int main() {
    int n, a, b, passengers = 0, capacity=0;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> a >> b;
        passengers -= a;
        passengers += b;
        if(passengers > capacity)
            capacity = passengers;
    }
    std::cout << capacity << std::endl;

    return 0;
}