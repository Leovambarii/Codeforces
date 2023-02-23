#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s, part_1, part_2;
        cin >> n;
        cin >> s;
        bool found = false;
        for(int i=0; i<=4; i++){
            part_1 = s.substr(0, i);
            part_2 = s.substr(n-4+i);
            if(part_1+part_2 == "2020") {
                found = true;
                break;
            }
        }
        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}