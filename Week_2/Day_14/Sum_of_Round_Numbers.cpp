#include <iostream>
#include <vector>

int main() {
    int n, t, count;
    std::vector<int> vect;
    std::cin >> t;
    int tab[t];
    for(int i=0; i<t; i++)
        std::cin >> tab[i];
    for(int i=0; i<t; i++) {
        count = 0;
        n = tab[i];
        if(n >= 1000) {
            vect.push_back((n/1000)*1000);
            n = n - (n/1000)*1000;
            count++;
        }
        if(n >= 100) {
            vect.push_back((n/100)*100);
            n = n - (n/100)*100;
            count++;
        }
        if(n >= 10) {
            vect.push_back((n/10)*10);
            n = n - (n/10)*10;
            count++;
        }
        if(n>0) {
            vect.push_back(n);
            count++;
        }
        std::cout << count << std::endl;
        for(int el : vect)
            std::cout << el << " ";
        std::cout << std::endl;
        vect.clear();
    }

    return 0;
}