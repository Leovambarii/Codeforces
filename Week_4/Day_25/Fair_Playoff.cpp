#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int s_1, s_2, s_3, s_4;
        std::cin >> s_1 >> s_2 >> s_3 >> s_4;
        if(std::max(s_1, s_2) < std::min(s_3, s_4) || std::max(s_3, s_4) < std::min(s_1, s_2))
            std::cout << "NO" << std::endl;
        else
            std::cout << "YES" << std::endl;
    }

    return 0;
}