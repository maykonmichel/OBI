/*
*	OBI 2018
*	Modalidade programação
*	Nível Sênior
*	Fase Nacional
*	Maximin
*
*	Maykon Michel Palma
*	BCC - UNESP
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100010;

main() {
	int n, l, r, a, m;
	vector<int> v, p;
	
	cin >> n >> l >> r;
	
	for(int k=0; k<n; k++) {
		cin >> a;
		if(l<=a && a<=r) v.push_back(a);
	}
	
	if(v.empty()) {
		cout << 0;
		return 1;
	}
	
	sort(v.begin(), v.end());
	
	m = max(abs(v.front()-l), abs(v.back()-r));
	
	for(int k=0; k<v.size()-1; k++) m = max(m, abs(v[k]-(v[k]+v[k+1])/2));
	
	cout << m;
}
