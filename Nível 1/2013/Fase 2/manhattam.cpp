#include <stdio.h>
#include <math.h>

main() {
	
	int xm, ym, xr, yr;
	
	scanf("%d %d %d %d", &xm, &ym, &xr, &yr);
	
	printf("%d", abs(xr-xm) + abs(yr-ym));
	
}
