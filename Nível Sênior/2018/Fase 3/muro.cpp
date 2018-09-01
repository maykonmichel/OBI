/*
*	OBI 2018
*	Modalidade programação
*	Nível Sênior
*	Fase Nacional
*	Muro
*
*	Maykon Michel Palma
*	BCC - UNESP
*/

#include <iostream>
#include <string.h>

using namespace std;

typedef long long int lli;

const lli DIV = 1000000007;
const int MAX = 10010;

lli r[MAX];

lli f(int x) {
	if(r[x]) return r[x];
	return r[x]=(f(x-1)+4*f(x-2)+2*f(x-3))%DIV;
}

main() {
	int n;
	
	cin >> n;
	
	memset(r, 0, sizeof(r));
	r[0] = r[1] = 1LL;
	r[2] = 5LL;
	
	cout << f(n);
}
