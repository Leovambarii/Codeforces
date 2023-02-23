#include <iostream>

int main() {
    int n,t;
    std::cin >> n >> t;
    std::string line;
    std::cin >> line;
    for(int i=0; i<t; i++) {
        for(int j=0; j<n; j++) {
            if(line[j] == 'B' && line[j+1] == 'G') {
                line[j] = 'G';
                line[j+1] = 'B';
                j++;
            }
        }
    }
    std::cout << line << std::endl;

    return 0;
}