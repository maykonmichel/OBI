#include <iostream>
#include <cstring>

using namespace std;

typedef pair<int, int> pii;

const int MAX = 20;

int b[MAX][MAX];
pii s;

void dfs(pii i, int d) {
	//cout << i.first << " " << i.second << "\n";	
	int xy[4][4] = {{-1, 1, 0, 0}, {0, 0, -1, 1}};
	
	if(i == s) b[s.first][s.second] = max(b[s.first][s.second], d);
	
	if(b[i.first][i.second] != -1) return;
	b[i.first][i.second] = d;
	
	for(int k=0; k<4; k++) {
		dfs(make_pair(i.first+xy[0][k], i.second+xy[1][k]), d+1);
	}
	b[i.first][i.second] = -1;
}

main() {
	int n, m;
	pii e;
	
	memset(b, -1, sizeof(b));
	
	cin >> n >> m >> e.first >> e.second >> s.first >> s.second;
	
	for(int k=0; k<=m+1; k++) {
		b[0][k] = true;
		b[n+1][k] = true;
	}
	for(int k=1; k<=n; k++) {
		b[k][0] = true;
		b[k][m+1] = true;
	}
	for(int y=2; y<n; y+=2) {
		for(int x=2; x<m; x+=2) {
			b[y][x] = true;
		}
	}
	
	/*for(int y=0; y<=n+1; y++) {
		for(int x=0; x<=m+1; x++) {
			cout << b[y][x];
		}
		cout << "\n";
	}*/
	
	dfs(e, 1);
	
	
	/*for(int y=0; y<=n+1; y++) {
		for(int x=0; x<=m+1; x++) {
			printf("%3d", b[y][x]);
		}
		cout << "\n";
	}*/
	
	cout << b[s.first][s.second];
}


/*Exemplo de entrada 1

7 7
3 7
5 1

Exemplo de saída 1

29

*/


/*Exemplo de entrada 1

11 11
11 1
1 11

Exemplo de saída 1

69

*/
