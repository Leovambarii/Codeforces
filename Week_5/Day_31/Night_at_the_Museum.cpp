#include <bits/stdc++.h>
// a od 98 do 122 z
int main() {
    int count=0;
    char start = 'a';
    std::string name;
    std::cin >> name;
    for(int i=0; i<name.length(); i++) {
        int letter_1 = abs(name[i]-start);
        int letter_2 = 26-letter_1;
        count += std::min(letter_1, letter_2);
        start = name[i];
    }
    std::cout << count << std::endl;

    return 0;
}