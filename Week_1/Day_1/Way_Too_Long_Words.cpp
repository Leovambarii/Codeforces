#include <iostream>

int main() {
    int n;

    std::cin >> n;
    if(n<1 || n>100) {
        std::cout << "\nWrong input!\n";
        return 0;
    }

    std::string words[n+1];

    for(int i=0; i<n; i++)
        std::cin >> words[i];

    for(int i=0; i<n; i++) {
        if(words[i].length() > 10) {
            char first = words[i].front();
            char last = words[i].back();
            int mid = words[i].length()-2;
            words[i] = first + std::to_string(mid) + last;
        }
            std::cout << words[i] << std::endl;
    }

    return 0;
}