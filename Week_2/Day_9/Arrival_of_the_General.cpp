#include <iostream>

int main() {
    int n, x;
    std::cin >> n >> x;
    int min_val(x), max_val(x), min_pos(0), max_pos(0);
    for (int i = 1; i < n; ++i) {
        std::cin >> x;
        if (x > max_val) {
            max_val = x;
            max_pos = i;
        }
        if (x <= min_val) {
            min_val = x;
            min_pos = i;
        }
    }
    if(min_pos<max_pos)
        std::cout << max_pos+(n-1-min_pos)-1 << std::endl;
    else
        std::cout << max_pos+(n-1-min_pos) << std::endl;
    return 0;
}