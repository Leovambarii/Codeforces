#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int s, n, a, b;
    std::cin >> s >> n;
    std::vector<std::pair<int, int>> dragons;

    for(int i=0; i<n; i++) {
        std::cin >> a >> b;
        dragons.push_back(std::make_pair(a, b));
    }
    std::sort(dragons.begin(), dragons.end());
    for(int i=0; i<n; i++) {
        if(s <= dragons[i].first) {
            std::cout << "NO" << std::endl;
            return 0;
        } else
            s += dragons[i].second;
    }
    std::cout << "YES" << std::endl;

    return 0;
}