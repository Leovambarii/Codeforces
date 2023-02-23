#include <bits/stdc++.h>

int main() {
    int n, m;
    char color;
    std::cin >> n >> m;
    bool is_colored = false;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            std::cin >> color;
            if(color == 'B' || color == 'G' || color == 'W')
                continue;
            is_colored = true;
            break;
        }
    }
    if(is_colored)
        std::cout << "#Color" << std::endl;
    else
        std::cout << "#Black&White" << std::endl;

    return 0;
}