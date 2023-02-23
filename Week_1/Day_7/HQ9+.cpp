#include <iostream>

int main() {
    std::string line;
    std::cin >> line;
    bool working = false;
    for(int i=0; i<line.length(); i++) {
        if(line[i]=='H' || line[i]=='Q' || line[i]=='9') {
            working = true;
            break;   
        }
    }
    if(working)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}