#include <bits/stdc++.h>
using namespace std;

int main() {
    int position=0;
    string s1, s2;
    cin >> s1 >> s2;
    char standing = s1[0];
    for(int i=0; i<s2.length(); i++) {
        if(s1[position] == s2[i])
            position++;
    }
    cout << position+1 << endl;

    return 0;
}