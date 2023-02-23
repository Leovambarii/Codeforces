#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string arr_a[m], arr_b[m];
    for(int i=0; i<m; i++)
        cin >> arr_a[i] >> arr_b[i];
    while(n--) {
        string word;
        int pos;
        cin >> word;
        word.erase(remove(word.begin(), word.end(), ' '), word.end());
        for(int i=0; i<m; i++) {
            if(word == arr_a[i]) {
                pos = i;
                break;
            }
        }
        if(arr_a[pos].length() <= arr_b[pos].length())
            cout << arr_a[pos] << " ";
        else
            cout << arr_b[pos] << " ";
    }
    

    return 0;
}