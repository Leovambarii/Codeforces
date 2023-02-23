#include <iostream>
#include <algorithm>

int main() {
    std::string input;
    std::cin >> input;
    if(input.length() < 1 || input.length() > 100) {
        std::cout << "\nWrong Input!\n";
        return 0;
    }
    char vowels[] = { 'a', 'A', 'o', 'O', 'y', 'Y', 'e', 'E', 'u', 'U', 'i', 'I' };

    for(int i=0; i<sizeof(vowels)/sizeof(vowels[0]); i++)
        input.erase(std::remove(input.begin(), input.end(), vowels[i]), input.end());

    for(int i=0; i<input.length(); i+=2) {
            input[i] = tolower(input[i]);
            input.insert(i, ".");
        }

    std::cout << input << std::endl;

    return 0;
}