#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int thrid = n/3;
        if(n%3 == 0)
            cout << thrid << " " << thrid+1 << " " << thrid-1 << endl;
        else if(n%3 == 1)
            cout <<thrid << " " << thrid+2 << " " << thrid-1 << endl;
        else
            cout << thrid+1 << " " << thrid+2 << " " << thrid-1 << endl;
    }
    return 0;
}