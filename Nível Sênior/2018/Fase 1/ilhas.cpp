/*
*
*	Maykon Michel Palma 
*	BCC - UNESP
*	OBI 2018
*	Nível Sênior
*	Fase local
*	Ilhas
*
*/

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

const int MAX = 1010;

int g[MAX];
vector<pii> c[MAX];	//Cabos

void dfs(int i, int p) {
	if(g[i]>=0 && g[i]<p) return;
	g[i] = p;
	for(int k=0; k<c[i].size(); k++) dfs(c[i][k].first, p+c[i][k].second);
}

main() {
	int n, m, u, v, p, s, M = 0;
	
	memset(g, -1, sizeof(g));
	
	scanf("%d %d", &n, &m);
	
	while(m--) {
		scanf("%d %d %d", &u, &v, &p);
		c[u].push_back(make_pair(v, p));
		c[v].push_back(make_pair(u, p));
	}
	
	scanf("%d", &s);
	
	dfs(s, 0);
	
	m = MAX;
	
	for(int k=1; k<=n; k++) {
		M = max(M, g[k]);
		if(g[k] && g[k]<m) m = g[k];
	}
	
	printf("%d", M-m);
}
