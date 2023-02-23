#include <iostream>
#include <vector>

int main() {
    int n, x, sereja=0, dima=0;
    std::cin >> n;
    std::vector<int> cards;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        cards.push_back(x);
    }
    for(int i=0; i<n; i++) {
        if(i%2 == 0) {
            if(cards.front() > cards.back()) {
                sereja += cards[0];
                cards.erase(cards.begin());
            } else {
                sereja += cards.back();
                cards.pop_back();
            }
        } else {
            if(cards.front() > cards.back()) {
                dima += cards[0];
                cards.erase(cards.begin());
            } else {
                dima += cards.back();
                cards.pop_back();
            }
        }
    }
    std::cout << sereja << " " << dima << std::endl;

    return 0;
}