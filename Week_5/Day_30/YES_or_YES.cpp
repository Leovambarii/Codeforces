#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::string line;
        std::cin >> line;
        for(int i=0; i<line.length(); i++)
            line[i] = toupper(line[i]);
        if(line == "YES")
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}