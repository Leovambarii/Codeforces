#include <bits/stdc++.h>

int main() {
    std::string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    std::string line;
    char side;
    std::cin >> side;
    std::cin >> line;
    if(side == 'R') {
        for(int i=0; i<line.length(); i++) {
            int index = keyboard.find(line[i]);
            std::cout << keyboard[index-1];
        }
    } else {
        for(int i=0; i<line.length(); i++) {
            int index = keyboard.find(line[i]);
            std::cout << keyboard[index+1];
        }
    }
    return 0;
}