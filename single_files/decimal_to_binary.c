#include <stdio.h>
#include <math.h>

int main() {
	long num= 816535412;
	long startsNum = num;
	int i;
	char b[32]; // storing 16-bit binary as string
	
	printf("change the decimal to binary(32-bit)), starts with %d...\n\n", num);
	
	for(i = 31; i >= 0; i--) {
		if((num - pow(2,i))>=0)	{
			b[31-i] = '1';
			
			printf("b[%d] is 1, %d >= 2^%d, next  goes with ", (31-i),num, i);
			num -= pow(2,i);
			printf("%d\n", num);
		} else {
			b[31-i] = '0';
			printf("b[%d] is 0, %d < 2^%d, next is %d still\n", (31-i),num, i, num);
		}
	}
	
	
	printf("\nthe result binary number of %d is 0b%s\n\n", startsNum, b);
	
	printf("0b ");
	for (i = 0; i<32; i++) {
		
		printf("%c", b[i]);
		
		if((i+1)%8 == 0) printf(" ");
	}
	printf("\n\n");
	
	
	
	printf("another way...\n0b ");
	
	num = startsNum;
	int mask;
		
	for (i = 31; i >= 0; i--) {
		mask = 1<<i;
		printf("%d", startsNum & mask ? 1 : 0);
		
		if(i % 8 == 0) printf(" ");
	}
	
	
	
	return 0;
}
