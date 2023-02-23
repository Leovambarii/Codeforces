#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0;
    string line, to_erase="xxx";
    cin >> n >> line;
    for(int i=0; i<n; i++) {
        if(i+2 <= n-1) {
            if(line[i]=='x' && line[i+1]=='x' && line[i+2]=='x')
                count++;
        }
    }
    cout << count << endl;

    return 0;
}