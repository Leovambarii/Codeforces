#include <iostream>
#include <algorithm>

int main() {
    long long int n, j;
    long long int tab_a[100007];
    long long int sol[100007];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> j;
        tab_a[j]++;
    }
    sol[0] = 0;
    sol[1] = tab_a[1];
    for (int i=2; i<=100000; i++)
        sol[i] = std::max(sol[i-1], sol[i-2]+i*tab_a[i]);
    std::cout << sol[100000];
    return 0;
}