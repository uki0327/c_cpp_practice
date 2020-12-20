#include <stdio.h>
#include <math.h>

unsigned long baud[14] = {2400,4800,9600,14400,19200,28800,38400,57600,76800,115200,230400,250000,500000,1000000};
//char multiple[2] = {16,8}

int main() {
	unsigned long b;
	int i = 0;
	
	for (i = 0; i<14; i++){
		printf("Baudrate: %u\t\t", baud[i]);
		
		b = floor(16000000 / (16 * baud[i])-0.5); // �񵿱� �Ϲݸ��
		printf("�񵿱� �Ϲݸ��: %d\t\t", b);
		
		b = floor(16000000 / (8* baud[i])-0.5); // �񵿱� 2��� ���
		printf("�񵿱� 2��Ӹ��: %d\n", b);
		
		
	}
	
	return 0;
}
