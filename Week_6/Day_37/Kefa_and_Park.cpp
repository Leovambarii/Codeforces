#include<bits/stdc++.h>
using namespace std;

int sol=0;

void DFS(int i, bool cats[], vector<int> vect[], int sum, int n, int m, int parent) {
	if(cats[i])
		sum++;
	else
		sum=0;
	if(vect[i].size()==1 && vect[i][0]==parent) {
		if(sum <= m)
			sol++;
		return;
	}
	if(sum>m)
		return;
	for(int j=0; j<vect[i].size(); j++)
		if(vect[i][j] != parent)
			DFS(vect[i][j], cats, vect, sum, n, m, i);
}

int main() {
	int n, m, x, y;
	cin >> n >> m;
	bool cats[n+1];
	for(int i=1; i<=n; i++)
		cin >> cats[i];
	vector<int> vect[n+1];
	for(int i=0; i<n-1; i++) {
		cin >> x >> y;
		vect[x].push_back(y);
		vect[y].push_back(x);
	}
	DFS(1, cats, vect, 0, n, m, -1);
	cout << sol << endl;
    return 0;
}