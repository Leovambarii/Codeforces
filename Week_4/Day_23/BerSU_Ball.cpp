#include <bits/stdc++.h>

int main() {
    int n, m, pairs=0;
    std::cin >> n;
    int boys[n];
    for(int i=0; i<n; i++)
        std::cin >> boys[i];
    std::cin >> m;
    int girls[m];
    for(int i=0; i<m; i++)
        std::cin >> girls[i];
    std::sort(boys, boys+n);
    std::sort(girls, girls+m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(abs(boys[i]-girls[j])<2) {
                girls[j] = 1000;
                pairs++;
                break;
            }
        }
    }
    std::cout << pairs << std::endl;

    return 0;
}