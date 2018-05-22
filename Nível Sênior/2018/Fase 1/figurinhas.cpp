/*
*
*	Maykon Michel Palma 
*	BCC - UNESP
*	OBI 2018
*	Nível Sênior
*	Fase local
*	Figurinhas da Copa
*
*/

#include <stdio.h>
#include <set>

using namespace std;

main() {
	int n, c, m, x;
	set<int> s;
	
	scanf("%d %d %d", &n, &c, &m);
	
	for(int k=0; k<c; k++) {
		scanf("%d", &x);
		s.insert(x);
	}
	
	for(int k=0; k<m; k++) {
		scanf("%d", &x);
		s.erase(x);
	}
	
	printf("%d", s.size());
}
