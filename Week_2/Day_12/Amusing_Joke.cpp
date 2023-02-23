#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string g_name, r_host, pile_letters;
    std::cin >> g_name;
    std::cin >> r_host;
    std::cin >> pile_letters;
    for(int i=0; i<g_name.length(); i++) {
        int index = pile_letters.find(g_name[i]);
        if(index == std::string::npos) {
            std::cout << "NO" << std::endl;
            return 0;
        } else
            pile_letters.erase(index, 1);
    }
    for(int i=0; i<r_host.length(); i++) {
        int index = pile_letters.find(r_host[i]);
        if(index == std::string::npos) {
            std::cout << "NO" << std::endl;
            return 0;
        } else
            pile_letters.erase(index, 1);
    }
    if(pile_letters.length() == 0)
        std::cout << "YES" << std::endl;
    else
       std::cout << "NO" << std::endl;

    return 0;
}