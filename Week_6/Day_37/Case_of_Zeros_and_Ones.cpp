#include <bits/stdc++.h>
using namespace std;

// int main() {
//     long long n;
//     string line;
//     cin >> n;
//     cin >> line;
//     while(line.find("01") != string::npos || line.find("10") != string::npos) {
//         int pos = line.find("01");
//         if(pos != string::npos)
//             line.erase(pos, 2);
//         pos = line.find("10");
//         if(pos != string::npos)
//             line.erase(pos, 2);
//     }
//     std::cout << line.length() << std::endl;

//     return 0;
// }

int main() {
    long long n, ones=0, zeros=0;
    cin >> n;
    string line;
    cin >> line;
    for(int i=0; i<n; i++) {
        if(line[i] == '1')
            ones++;
        else
            zeros++;
    }
    std::cout << abs(ones-zeros) << std::endl;
}