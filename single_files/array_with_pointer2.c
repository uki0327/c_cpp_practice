
#include <stdio.h>
int main() {
	int *pt;
	int ar[] = {10,20,30,40};
	pt = ar;

	printf("ar[0] = %d , *pt = %d\n", ar[0], *pt);
	printf("%4d, %4d, %4d, %4d\n", ar[0], ar[1], ar[2], ar[3]);
	printf("%4d, %4d, %4d, %4d\n", *ar, *(ar+1), *(ar+2), *(ar+3));
	printf("*pt+1 - %d , (*pt)+1 = %d\n", *pt+1, (*pt)+1);
	printf("*(pt+1) = %d\n", *(pt+1));
	pt += 2;
	printf("*pt = %d\n", *pt);
	*pt = 88;
	printf("*pt-1 = %d\n", *pt-1);	
	*pt++;
	printf("did *pt++");
	printf("*pt = %d\n", *pt);
	(*pt)++;
	printf("(*pt)++ = %d\n", *pt);
	return 0;
}
