#include <stdio.h>

int main() {
	printf("대문자를 입력하시오~\n");
	
	char input;
	
	scanf("%c", &input);
	
	char cc;
	
	cc = input+32;
	
	printf("입력한 대문자를 소문자로 변경하면: %c\n", cc);
	
	return 0;
	
	}
