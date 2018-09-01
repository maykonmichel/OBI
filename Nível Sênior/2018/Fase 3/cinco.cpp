/*
*	OBI 2018
*	Modalidade programação
*	Nível Sênior
*	Fase Nacional
*	Cinco
*
*	Maykon Michel Palma
*	BCC - UNESP
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1010;

main() {
	int n, m;
	bool b = false;
	vector<int> d;
	
	cin >> n;
	
	for(int k=0; k<n; k++) {
		cin >> m;
		d.push_back(m);
	}
	
	for(int k=0; k<n && !b; k++) {
		if(!d[k]) {
			swap(d[n-1], d[k]);
			b = true;
		}
	}
	
	if(!b) {
		for(int k=n-1; k; k--) {
			if(d[k] == 5) {
				swap(d[n-1], d[k]);
				b = true;
			}
		}
	}
	
	if(b) for(int k=0; k<n; k++) cout << d[k] << " ";
	else cout << -1;
}
