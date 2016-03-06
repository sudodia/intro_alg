#include <stdio.h>

int main() {
	int b1[6] = {0,1,0,0,1,1};
	int b2[6] = {1,1,0,1,0,1};
	int bo[7] = {0,0,0,0,0,0,0};

	for (int i = 0; i < 6; i++) {
		if (b1[i] + b2[i] == 2)
			bo[i+1]++;
		else if (b1[i] + b2[i] == 1)
			bo[i]++;

		if (bo[i] == 2) {
			bo[i] = 0;
			bo[i+1]++;
		}
	}

	for (int i = 0; i < 7; i++)
		printf("%d", bo[i]);

	return 0;
}