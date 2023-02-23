#include <iostream>

int main() {
    int n, t, a, curr=1;
    std::cin >> n >> t;
    int tab[n];
    for(int i=1; i<n; i++)
        std::cin >> tab[i];
    bool found = false;
    while(curr < t) {
        curr += tab[curr];
        if(curr == t) {
            std::cout << "YES" << std::endl;
            found = true;
        }
    }
    if(!found)
        std::cout << "NO" << std::endl;



    return 0;
}