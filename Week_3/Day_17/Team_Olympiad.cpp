#include <iostream>
using namespace std;
int n, t, tab[4][5001], ma[4], k;
int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> t;
        tab[t][ma[t]++] = i;
    }
    k = min(ma[1], min(ma[2], ma[3]));
    cout << k << endl;
    for (int i=0; i<k; i++)
        cout << tab[1][i] << " " << tab[2][i] << " " << tab[3][i] << endl;
}