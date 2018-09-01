#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100010;

vector<int> g[MAX];

int dfs(int i=0) {
	int p = 1, q=0, r;
	for(int k=0; k<g[i]; k++) {
		if(!q) q = r = dfs(g[i][k]);
		
	}
	return p;
}

main() {
	int n, i, j;
	
	cin >> n;
	
	while(n--) {
		cin >> i;
		cin >> j;
		g[j].push_back(i); 
	}
	
	dfs();
}
