#include <iostream>

int main() {
    int n, m, present, start=1;
    std::cin >> n >> m;
    long long int time = 0;

    for(int i=0; i<m; i++) {
        std::cin >> present;
        if(present >= start)
            time += present-start;
        else
            time += n-(start-present);
        start = present;
    }
    std::cout << time << std::endl;

    return 0;
}