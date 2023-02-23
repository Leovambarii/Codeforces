#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, maximum=0, skills;
        map<int, int> students;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a;
            students[a]++;
            maximum = max(maximum, students[a]);
        }
        skills = students.size();
        cout << max(min(maximum-1, skills), min(maximum, skills-1)) << endl;
    }
}
