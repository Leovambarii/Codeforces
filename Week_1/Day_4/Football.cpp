#include <iostream>

int main() {
    int zeros=0, ones=0;
    std::string lineup;
    std::cin >> lineup;
    for(int i=0; i<lineup.length(); i++) {
        if(lineup[i]=='0') {
            zeros++;
            ones = 0;
        } else {
            ones++;
            zeros = 0;
        }
        if(zeros == 7 || ones == 7) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;

    return 0;
}