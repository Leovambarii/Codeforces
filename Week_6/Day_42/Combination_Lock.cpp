#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum=0;
    cin >> n;
    string line1, line2;
    cin >> line1;
    cin >> line2;
    for(int i=0; i<n; i++) {
        int number1=line1[i]-'0', number2=line2[i]-'0';
        sum += min(abs(number1-number2), 10-abs(number1-number2));
    }
    cout << sum << endl;

    return 0;
}