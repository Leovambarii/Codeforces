#include <iostream>

int main() {
    std::string word;
    std::cin >> word;
    bool isuppers = true;;
    for(int i=1; i<word.length(); i++) {
        if(islower(word[i])) {
            isuppers = false;
            break;
        }
    }
    if(isuppers) {
        for(int i=0; i<word.length(); i++) {
            if(isupper(word[i]))
                word[i] = tolower(word[i]);
            else
              word[i] = toupper(word[i]);
        }
    }
    std::cout << word << std::endl;

    return 0;
}