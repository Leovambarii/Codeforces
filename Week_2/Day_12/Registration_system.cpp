#include <iostream>
#include <map>
#include <algorithm>

int main() {
    int n;
    std::string login;
    std::cin >> n;
    std::string tab[n];
    std::map<std::string, int> logins;
    for(int i=0; i<n; i++) {
        std::cin >> login;
        if(logins.count(login) == 0) {
            tab[i] = "OK";
            logins[login] = 1;
        } else {
            tab[i] = login + std::to_string(logins[login]);
            logins[login]++;
        }
    }
    for(int i=0; i<n; i++)
        std::cout << tab[i] << std::endl;

    return 0;
}