/*
*	OBI 2018
*	Modalidade programação
*	Nível Sênior
*	Fase Nacional
*	Bolas
*
*	Maykon Michel Palma
*	BCC - UNESP
*/

#include <iostream>
#include <set>

using namespace std;

main() {
	int n, b;
	multiset<int> m;
	
	for(int k=0; k<8; k++) {
		cin >> b;
		m.insert(b);
	}
	
	for(int k=0; k<9; k++) if(m.count(k) > 4) {
		cout << "N";
		return 1;
	}
	
	cout << "S"; 
}
