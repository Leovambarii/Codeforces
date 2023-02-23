#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    bool is_magic = true;
    for(int i=0; i<n.length(); i++) {
        if(n[i]=='1' && n[i+1]=='4' && n[i+2]=='4') {
            i += 2;
        } else if(n[i]=='1' && n[i+1]=='4')
            i ++;
        else if(n[i] != '1') {
            is_magic = false;
            break;
        }
    }
    if(is_magic)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}