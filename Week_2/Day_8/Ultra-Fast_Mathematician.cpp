#include <iostream>

int main() {
    std::string line_1, line_2, result;
    std::cin >> line_1 >> line_2;
    for(int i=0; i<line_1.length(); i++) {
        if(line_1[i] != line_2[i])
            result += "1";
        else
            result += "0";
    }
    std::cout << result << std::endl;

    return 0;
}