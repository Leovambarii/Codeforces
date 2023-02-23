#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::string line;
        std::cin >> line;
        if(line.length()%2 != 0) {
            std::cout << "NO" << std::endl;
            continue;
        }
        std::string first = line.substr(0, line.length()/2);
        std::string second = line.substr(line.length()/2);
        if(first == second)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}