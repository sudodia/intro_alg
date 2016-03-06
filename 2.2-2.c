#include <stdio.h>

int main() {
	int arr[9] = {4,7,6,9,1,4,6,9,8};

	for (int i = 0; i < 9; i++) {
		int min = arr[i];
		int poi;

		for (int j = i + 1; j < 9; j++) 
			if (min > arr[j]) {
				min = arr[j];
				poi = j;				
			}

		arr[poi] = arr[i];
		arr[i] = min;
	}

	for (int i = 0; i < 9; i++)
		printf("%d ", arr[i]);

	return 0;
}