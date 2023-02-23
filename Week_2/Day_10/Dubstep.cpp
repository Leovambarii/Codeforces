#include <iostream>

int main() {
    std::string line;
    bool beginning_of_the_word = true;
    std::cin>>line;
    for(int i=0;i<line.length();i++) {
        if(line[i]=='W' && line[i+1]=='U' && line[i+2]=='B') {
            i += 2;
            if(!beginning_of_the_word)
                std::cout<<" ";
            continue;
        } else {
            beginning_of_the_word = false;
            std::cout<<line[i];
        }
    }
    return 0;
}