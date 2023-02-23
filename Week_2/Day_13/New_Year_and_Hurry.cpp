#include <iostream>

int main() {
    int n, k, problems=0;
    std::cin >> n >> k;
    int time = 240 - k;
    for(int i=1; i<n+1; i++) {
        if(i*5 <= time) {
            time -= i*5;
            problems++;
        } else
            break;
    }
    std::cout << problems << std::endl;

    return 0;
}