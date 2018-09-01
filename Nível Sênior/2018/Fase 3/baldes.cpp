/*
*	OBI 2018
*	Modalidade programação
*	Nível Sênior
*	Fase Nacional
*	Baldes
*
*	Maykon Michel Palma
*	BCC - UNESP
*/

#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 10010;

int n, l[MAX], h[MAX];

int f(int a, int b) {
	int m=MAX*10, M=0, d=0;
	for(int k=a; k<=b; k++) {
		if(l[k] < m && h[k] > M) {
			if(M-l[k] > h[k]-m) m = l[k];
			else M = h[k];
		}
		else {
			m = min(m, l[k]);
			M = max(M, h[k]);
		}
	}
	return M-m;
}

main() {
	int m, o, p, i;
	
	cin >> n >> m;
	
	for(int k=1; k<=n; k++) {
		cin >> h[k];
		l[k] = h[k];
	}
	
	for(int k=0; k<m; k++) {
		cin >> o >> p >> i;
		
		if(o == 1) {
			if(p < l[i]) l[i] = p;
			else if(p > h[i]) h[i] = p;
		}
		else {
			cout << f(p, i) << endl;
		}
	}
}
