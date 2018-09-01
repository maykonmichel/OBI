#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100010;

main() {
	int n, l, h, v[MAX];
	bool m[MAX];
	
	cin >> n >> l >> h;
	
	for(int k=0; k<n; k++) cin >> v[k];
	for(int k=0; k<n; k++) cin >> m[k];
	
	int s=0, r=0;
	for(int k=0; k<n; k++) {
		s = max(0, s+v[k]);
		r = max(r, s);
	}
	
	cout << r;
}

/*Exemplo de entrada 1

14 3 4
9 0 -23 -12 7 1 -13 2 -1 9 -16 -1 14 12
1 0  0   1  0 1  0  0  1 1  0   0  1  1

Exemplo de saída 1

19

*/

/*Exemplo de entrada 2

14 7 20
9 0 -23 -12 7 1 -13 2 -1 9 -16 -1 14 12
1 0  0   1  0 1  0  0  1 1  0   0  1  1

Exemplo de saída 2

-12

*/

/*Exemplo de entrada 3

14 5 5 
9 0 -23 -12 7 1 -13 2 -1 9 -16 -1 14 12
1 0  0   1  0 1  0  0  1 1  0   0  1  1

Exemplo de saída 3

14

*/

/*Exemplo de entrada 4

14 0 20
9 0 -23 -12 7 1 -13 2 -1 9 -16 -1 14 12
1 0  0   1  0 1  0  0  1 1  0   0  1  1

Exemplo de saída 4

26

*/
