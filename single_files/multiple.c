#include <stdio.h>

int main() {
	int a;
	int b;
	char sign = 0;
	int sum = 0;
	
	printf("input 2 numbers to multiply: ");
	scanf("%d %d", &a, &b);
	
	sign = ((a < 0) && (b < 0)) || ((a >= 0) && (b >= 0)) ? 0 : 1;
	
	a = a > 0 ? a : a * (-1);
	b = b > 0 ? b : b * (-1);
	
	if(b > a) {
		int temp;
		
		temp = a;
		a = b;
		b = temp;
	}
	
	while(b > 0) {
		sum += a;
		b--;
	}
	
	sum = (sign == 1) ? sum *= (-1): sum;
	
	printf("result: %d", sum);
	
	return 0;
}
