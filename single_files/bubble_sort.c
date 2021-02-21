#include <stdio.h>
int arr[10];
void inputNumbers() {
	int i;
	printf("Input 10 integers:\n");
	for(i=0;i<10;i++)
		scanf("%d", arr+i);
}
void sortNumbers() {
	int i, j, tmp;
	for(i=0;i<10;i++) {
		for(j=0;j<9-i;j++) {
			if(arr[j]>arr[j+1]) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
void printNumbers() {
	int i;
	for(i=0;i<10;i++)
		printf("%d ", arr[i]);
}
int main() {
	inputNumbers();
	sortNumbers();
	printNumbers();
	return 0;
}
