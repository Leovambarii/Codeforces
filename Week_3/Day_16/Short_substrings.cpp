#include <iostream>

int main() {
    int n;
    std::string word, sol;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> word;
        if(word.length() == 2)
            sol = word;
        else {
            for(int i=0; i<word.length(); i++) {
                if(i%2 == 1 && i != word.length()-1)
                    i++;
                sol = sol + word[i];
            }
        }
        std::cout << sol << std::endl;
        word.clear();
        sol.clear();
    }

    return 0;
}