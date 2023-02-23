#include <iostream>

int main() {
    long int n, anton=0, danik=0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'D')
            danik++;
        else
            anton++;
    }
    if(anton == danik)
        std::cout << "Friendship" << std::endl;
    else if(anton > danik)
        std::cout << "Anton" << std::endl;
    else
        std::cout << "Danik" << std::endl;

    return 0;
}