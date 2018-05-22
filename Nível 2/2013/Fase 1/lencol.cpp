#include <stdio.h>

//Retorna (x1, y1) está contido em (x2, y2)
int c(int x1,int y1,int x2,int y2) {
	return x1<=x2 && y1<=y2 || x1<=y2 && y1<=x2;
}

main() {
	int a1, b1, a2, b2, a, b;
	
	scanf("%d %d %d %d %d %d",&a1,&b1,&a2,&b2,&a,&b);
	
	if(c(a, b, a2, b2)) {
		printf("S\n"); 
		return 0;
	}
	
	for(int k=0;k<=a;k++) {
		if(c(a,k,a1,b1)&&c(a,b-k,a2,b2) || c(a,k,a2,b2)&&c(a,b-k,a1,b1)) {
			printf("S\n"); 
			return 0;
		}
	}
	for(int k=0;k<=b;k++) {
		if(c(b,k,a1,b1)&&c(b,a-k,a2,b2) || c(b,k,a2,b2)&&c(b,a-k,a1,b1)) {
			printf("S\n"); 
			return 0;
		}
	}
	printf("N\n");
}
