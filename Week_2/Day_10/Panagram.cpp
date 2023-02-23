#include <iostream>
#include <algorithm>

int main() {
    int n, count=0;
    std::string line;
    std::cin >> n;
    std::cin >> line;
    for(int i=0; i<n; i++) 
        line[i] = tolower(line[i]);
    std::sort(line.begin(), line.end());
    for(int i=0; i<n; i++) {
        if(line[i] != line[i+1])
            count++;
    }
    if(count == 26)
        std::cout << "YES" << std::endl;
    else
       std::cout << "NO" << std::endl;

    return 0;
}