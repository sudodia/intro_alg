#include <stdio.h>
int merge(int arr[], int lo, int hi, int mid);
int inver_mergeSort(int arr[], int lo, int hi);

int main() {
	int arr[] = {9,8,7,6,5,4,1,2,3};
	int inver = inver_mergeSort(arr, 0, 9);

	printf("Inversion: %d\n", inver);

	return 0;
}

int merge(int arr[], int lo, int hi, int mid) {
	int count = 0;
	int tempArr[hi-lo+1];
	int low = lo;
	int mi = mid;
	int i = 0;

	while (low <= mid && mi <= hi) {
		if (arr[mi] < arr[low]) {
			tempArr[i++] = arr[mi++];
			count++;
		}
		else
			tempArr[i++] = arr[low++];
	}

	while (low <= mid) {
		tempArr[i++] = arr[low++];
		count++;
	}
	while (mi <= hi)
		tempArr[i++] = arr[mi++];

	i--;
	for (int j = 0; j < hi-lo+1; j++)
		arr[lo+j] = tempArr[j];

	return count;
}

int inver_mergeSort(int arr[], int lo, int hi) {
	if (lo >= hi)
		return 0;

	int count = 0;
	int mid = (lo + hi)/2;

	count += inver_mergeSort(arr, lo, mid);
	count += inver_mergeSort(arr, mid + 1, hi);
	count += merge(arr, lo, hi, mid + 1);

	return count;
}