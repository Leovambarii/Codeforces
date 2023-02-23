#include <iostream>

int main(int argc, char const *argv[]) {
    std::string nick;
    std::cin >> nick;
    if(nick.length() < 1 || nick.length() > 100) {
        std::cout << "\nWrong Input!\n";
        return 0;
    }
    int sum = 0;
    for(int i=0; i<nick.length(); i++) {
        bool is_distinct = false;
        for(int j=0; j<i; j++) {
            if(nick[j] == nick[i]) {
                is_distinct = true;
                break;
            }
        }
        if(!is_distinct)
            sum++;
    }
    if(sum%2 == 0)
        std::cout << "CHAT WITH HER!";
    else
            std::cout << "IGNORE HIM!";

    return 0;
}
