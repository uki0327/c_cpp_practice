#include <stdio.h>

int main() {
	int a;
	int b;
	char sign = 0;
	int sum = 0;
	
	printf("input 2 numbers to divide: ");
	scanf("%d %d", &a, &b);
	
	if (b == 0) { // b가 0일 경우 무한루프 방지
		printf("result: 0\tremain: %d", a);
		return 0;
	}
	
	// 부호비트 설정 후 각 int 값을 절대값으로 변환
	sign = ((a < 0) && (b < 0)) || ((a >= 0) && (b >= 0)) ? 0 : 1;	
	a = (a < 0) ? a * (-1) : a;
	b = (b < 0) ? b * (-1) : b;
	
	while(a >= b) {
		sum++;
		a -= b;
	}
	sum = (sign == 1) ? sum * (-1) : sum; // 몫 부호 적용
	a = (sign == 1) ? a * (-1) : a; // 나머지 값 부호 적용
	
	printf("result: %d\tremain: %d", sum, a);
	
	return 0;
}
