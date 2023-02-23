#include <bits/stdc++.h>

int main() {
    int n, k=0;
    std::vector<int> numbers;
    std::cin >> n;
    while(n>0) {
        k++;
        if(n%2 == 0) {
            numbers.push_back(2);
            n -= 2;
        } else {
            numbers.push_back(3);
            n -= 3;
        }
    }
    std::cout << k << std::endl;
    for(int el : numbers)
        std::cout << el << " ";
    std::cout << std::endl;

    return 0;
}