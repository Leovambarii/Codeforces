#include <iostream>

int main() {
    int n, sum=0;
    std::string figure;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> figure;
        if(figure == "Tetrahedron")
            sum += 4;
        else if(figure == "Cube")
            sum += 6;
        else if(figure == "Octahedron")
            sum += 8;
        else if(figure == "Dodecahedron")
            sum += 12;
        else if(figure == "Icosahedron")
            sum += 20;
    }
    std::cout << sum << std::endl;


    return 0;
}