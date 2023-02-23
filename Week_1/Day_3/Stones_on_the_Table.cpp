#include <iostream>

int main(int argc, char const *argv[]) {
    int n, sum=0;
    std::string s;
    std::cin >> n;
    if(n < 1 || n > 50) {
        std::cout << "\nWrong Input!\n";
        return 0;
    }
    std::cin >> s;
    char stone = s[0];
    for(int i=1; i<s.length(); i++) {
        if(s[i] == stone)
            sum++;
        else
            stone = s[i];
    }
    std::cout << sum << std::endl;

    return 0;
}
