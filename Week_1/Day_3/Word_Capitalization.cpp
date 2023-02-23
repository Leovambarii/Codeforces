#include <iostream>

int main() {
    std::string word;
    std::cin >> word;
    if(word.length() < 1 || word.length() > 1000) {
        std::cout << "\nWrong Input!\n";
        return 0;
    }
    word[0] = toupper(word[0]);
    std::cout << word << std::endl;

    return 0;
}