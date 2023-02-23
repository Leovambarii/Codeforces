#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count_r=0, count_n=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'r')
            count_r++;
        else if(s[i] == 'n')
            count_n++;
    }
    for(int i=0; i<count_n; i++)
        cout << "1 ";
    for(int i=0; i<count_r; i++)
        cout << "0 ";
    cout << endl;
    return 0;
}