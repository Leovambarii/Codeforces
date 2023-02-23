#include <iostream>
#include <algorithm>

int main() {
    int n, l, longest_dist;
    std::cin >> n >> l;
    int tab[n];

    for (int i=0; i<n; i++)
        std::cin >> tab[i];

    std::sort(tab, tab+n);
    longest_dist = std::max(tab[0], l-tab[n-1])*2;

    for (int i=0; i<n-1; i++)
        longest_dist = std::max(longest_dist, tab[i+1]-tab[i]);

    std::cout.precision(20);
    std::cout << std::fixed << longest_dist/2.0 << std::endl;
    return 0;
}