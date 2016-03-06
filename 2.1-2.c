#include <stdio.h>

int main(void) {
	int arr[7] = {1,1,3,4,5,7,7};

	for (int i = 1; i < 7; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] < key) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	return 0;
}