#include <stdio.h>

int main() {
	int ar[2][3] = { {10,20,30}, {40,50,60} };

	printf("ar[0][0] = %#x , %#X, %#X\n", ar, ar[0], &ar[0][0]);
	printf("ar[0] = &ar[0][0] , ar[1] = &[1][0] , ar[2] = &ar[2][0]\n");
	printf("ar[0] = %#X , ar[1] = %#X , ar[2] = %#X\n", ar[0], ar[1], ar[2]);
	printf("*ar = %#X ,", *ar);
	printf("ar+1 = %#X\n", ar+1);
	printf("*ar[1] = %3d ,", *ar[1]);
	printf("*ar[2] = %3d\n", *ar[1]+2);

	return 0;
}
