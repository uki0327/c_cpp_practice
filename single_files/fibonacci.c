#include <stdio.h>

int main() {
	int i;
	int a[15] = {0,1,0};

	for(i=2; i<15; i++) {
		a[i] = a[i-1] + a[i-2];
	}

	for(i=1; i<15; i++) {
		printf("%dth Fibonacci", i);
		printf(" value is: %d\n", a[i]);
	}

	return 0;
}
