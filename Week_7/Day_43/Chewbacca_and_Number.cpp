#include <iostream>
using namespace std;

int main() {
    string line, sol;
    cin >> line;
    for (int i=0; i < line.length(); i++) {
        int val = line[i]-'0';
        int diff = 9-val;
        if(i==0 && diff==0)
            sol += line[i];
        else {
            if(val > diff)
                sol += to_string(diff);
            else
                sol += line[i];
        }
    }
    cout << sol << endl;
}