#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n, x, floor=1, curr=2;
        std::cin >> n >> x;
        while(curr < n) {
            curr += x;
            floor++;
        }
        std::cout << floor << std::endl;
    }
    return 0;
}