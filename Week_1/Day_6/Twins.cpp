#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, x, sum=0, my_pile=0, least_coins=0;
    std::vector<int> subset;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        sum += x;
        subset.push_back(x);
    }
    std::sort(subset.begin(), subset.end());
    while(my_pile <= sum) {
        int x = subset.back();
        my_pile += x;
        sum -= x;
        subset.pop_back();
        least_coins++;
    }
    std::cout << least_coins << std::endl;

    return 0;
}