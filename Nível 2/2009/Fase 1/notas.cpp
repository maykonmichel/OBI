#include <stdio.h>

main() {
	
	int n;
	
	scanf("%d", &n);
	
	if(n >= 86) printf("A");
	else if(n >= 61) printf("B");
	else if(n >= 36) printf("C");
	else if(n) printf("D");
	else printf("E");
	
}
