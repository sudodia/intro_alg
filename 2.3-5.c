#include <stdio.h>
int binarySearch(int arr[], int size, int aim);

int main() {
	int arr[] = {1,2,3,4,5,6,7,8};
	int aim = 2;
	int outcome = binarySearch(arr, 8, 7);
	printf("%d \n", outcome);

	return 0;
}

int binarySearch(int arr[], int size, int aim) {
	int index = 233;
	int mid = size / 2 - 1;
	int high = size - 1;
	int low = 0;

	while (high >= low) {
		if (arr[mid] > aim) {
			high = mid;
			mid = (high + low) / 2;
		}
		else if (arr[mid] < aim) {
			low = mid;
			mid = (high + low) / 2;
		}
		else {
			index = mid + 1;
			break;
		}

	}

	return index;
}