#include <bits/stdc++.h>

int main() {

    std::string card;
    std::cin >> card;
    std::string hand[5];
    bool found = false;
    for(int i=0; i<5; i++)
        std::cin >> hand[i];
    for(int i=0; i<5; i++) {
        std::string hand_card = hand[i];
        if(card[0] == hand_card[0] || card[1] == hand_card[1]) {
            found = true;
            break;
        }
    }
    if(found)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}