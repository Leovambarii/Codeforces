#include <iostream>

int main() {
    std::string line_1, line_2;
    std::cin >> line_1;
    std::cin >> line_2;

    if(line_1.length() < 1 || line_2.length() < 1 || line_1.length() > 100 || line_2.length() > 100) {
        std::cout << "\nWrong Input!\n";
        return 0;
    }

    for(int i=0; i<line_1.length(); i++) {
        line_1[i] = toupper(line_1[i]);
        line_2[i] = toupper(line_2[i]);

        if(line_1[i] == line_2[i])
            continue;
        else if(line_1[i] > line_2[i]) {
            std::cout << "1" << std::endl;
            return 0;
        } else {
            std::cout << "-1" << std::endl;
            return 0;
        }
    }
    std::cout << "0" << std::endl;

    return 0;
}