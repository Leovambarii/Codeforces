#include <iostream>

int main() {
    std::string s, word = "hello";
    std::cin >> s;
    for(int i=0, j=0; i<s.length(); i++) {
        if(s[i] == word[j])
            j++;
        if(j == word.length()) {
                std::cout << "YES" << std::endl;
                return 0;
        }
    }
    std::cout << "NO" << std::endl;

    return 0;
}