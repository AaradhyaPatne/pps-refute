#include <stdio.h>

int isEven(int num) {
	return num % 2 == 0;
}

int main() {
	int testCase1 = 4;
	int testCase2 = 5;

	printf("Test case 1 (num = %d): %s\n"), testCase1, isEvem(testCase1) ? "Even" : "Odd");
	printf("Test case 2 (num = %d): %s\n"), testCase2, isEvem(testCase2) ? "Even" : "Odd");
	
	return 0;
}