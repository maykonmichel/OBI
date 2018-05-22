/*
*
*	Maykon Michel Palma 
*	BCC - UNESP
*	OBI 2018
*	Nível Sênior
*	Fase local
*	Piso da escola
*
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

main() {
	int l, c, t1=0, t2=0;
	
	scanf("%d %d", &l, &c);
	
	printf("%d\n%d", l*c+(l-1)*(c-1), 2*(l+c-2));
}
