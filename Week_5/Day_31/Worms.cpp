// #include <bits/stdc++.h>

// int main() {
//     long int n, m, val;
//     std::cin >> n;
//     int piles[n];
//     for(int i=0; i<n; i++)
//         std::cin >> piles[i];
//     std::cin >> m;
//     int worms[m];
//     for(int i=0; i<m; i++)
//         std::cin >> worms[i];
//     for(int i=0; i<m; i++) {
//         int left=1, right=piles[0];
//         int val = worms[i];
//         if(val>=left && val <= right) {
//             std::cout << 1 << std::endl;
//             continue;
//         }
//         for(int j=1; j<n; j++) {
//             left = right+1;
//             right += piles[j];
//             if(val>=left && val <= right) {
//                 std::cout << j+1 << std::endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>

int main() {
    int n, m, sum=0;
    std::cin >> n;
    int piles[n], count[n];
    for(int i=0; i<n; i++){
       std::cin >> piles[i];
       sum += piles[i];
       count[i] = sum;
    }
    std::cin >> m;
    int worms[m];
    for(int i=0; i<m; i++)
        std::cin >> worms[i];
    for(int j=0; j<m; j++)
        std::cout << std::lower_bound(count,count+n,worms[j])-count+1 << std::endl;

    return 0;
}