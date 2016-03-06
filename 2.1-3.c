#include <stdio.h>

int main(void) {
	int arr[8] = {1,1,1,1,5,6,2,3};
	int v = 5;
	int p = 233;

	for (int i = 0; i < 8; i++) {
		if (arr[i] == v)
			p = i + 1;
	}

	if (p <= 8 && p > 0)
		printf("%d\n", p);
	else
		printf("Let's party!\n");

	return 0;
}