#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, most=0, count;
    string str, sol;
    cin >> n >> str;
    for(int i=0; i<n; i++) {
        string sub = str.substr(i, 2);
        count = 0;
        for(int i=0; i<n; i++) {
            if(str[i]==sub[0] && str[i+1]==sub[1])
                count++;
        }
        if(count > most){
            most = count;
            sol = sub;
        }
    }
    cout << sol << endl;
}

