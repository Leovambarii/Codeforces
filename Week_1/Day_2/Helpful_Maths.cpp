#include <iostream>
#include <algorithm>
#include <sstream>

int main() {
    std::string s;
    std::cin >> s;
    if(s.length() > 100 || s.length() < 1) {
        std::cout << "\nWrong input!\n";
        return 0;
    }

    int tab[s.length()/2 + 1];
    std::stringstream ss;

    for(int i=0, j=0; i<s.length(); i+=2, j++) {
        if(i>s.length()-1)
            break;
        ss << s[i];
        tab[j] = std::stoi(ss.str());
        ss.str("");
    }

    int size = sizeof(tab)/sizeof(tab[0]);
    std::sort(tab, tab + size);
    for(int i=0; i<size; i++) {
        if(i != 0)
            std::cout << '+';
        std::cout << tab[i];
    }
    std::cout << std::endl;

    return 0;
}