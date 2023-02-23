#include <bits/stdc++.h>

int main() {
    int n, score=0;
    std::cin >> n;
    std::string team, win;
    while(n--) {
        if(score != 0) {
            std::cin >> team;
            if(team == win)
                score++;
            else
                score--;
        } else {
            std::cin >> win;
            score = 1;
        }
    }
    std::cout << win << std::endl;

    return 0;
}