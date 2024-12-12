#include <stdio.h>

int isPrime(int num) {
	if (num 1) {
		return 0;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main()
	int testCase1 = 11;
	int testCase2 = 9;

	printf("Test case 1 (num = %d); %s\n", testCase1, isPrime (testCase1) ? "prime" : "Not prime");
	printf("Test case 2 (num = %d); %s\n", testCase1, isPrime (testCase2) ? "prime" : "Not prime");

	return 0;
}

