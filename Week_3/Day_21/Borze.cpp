#include <bits/stdc++.h>

int main() {
    std::string line, code, sol;
    std::cin >> line;
    for(int i=0; i<line.length(); i++) {
        code += line[i];
        if(code == ".") {
            sol += '0';
            code.clear();
        } else if(code == "-.") {
            sol += '1';
            code.clear();
        } else if(code == "--") {
            sol += '2';
            code.clear();
        }
    }
    std::cout << sol << std::endl;

    return 0;
}