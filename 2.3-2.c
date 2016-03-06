#include <stdio.h>
void mergeSort(int org[], int lo, int hi);
void merge(int org[], int lo, int mid, int hi);

int main() {
	int arr[] = {3,4,2,5,1,6,8,9,7};
	mergeSort(arr, 0, 8);

	for (int i = 0; i < 9; i++)
		printf("%d  ", arr[i]);

	printf("\n");

	return 0;
}

void merge(int org[], int lo, int mid, int hi) {
	int tmid = mid + 1;
	int tlo = lo;
	int tempArr[hi-lo+1];

	int i = 0;

	while (tlo <= mid && tmid <= hi) {
		if (org[tlo] <= org[tmid]) {
			tempArr[i++] = org[tlo++];
		}
		else {
			tempArr[i++] = org[tmid++];
		}
	}

	while (tlo <= mid)
		tempArr[i++] = org[tlo++];
	while (tmid <= hi)
		tempArr[i++] = org[tmid++];

	i--;
	while (i >= 0) {
		org[lo+i] = tempArr[i];
		i--;
	}

}

/*void merge(int a[], int low, int mid, int high)
{
    int b[high-low+1];
    int i = low, j = mid + 1, k = 0;
  
    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
  
    while (j <= high)
        b[k++] = a[j++];
  
    k--;
    while (k >= 0) {
        a[low + k] = b[k];
        k--;
    }
}*/

void mergeSort(int org[], int lo, int hi) {

	int mid = (lo + hi) / 2;

	if (lo < hi) {
		mergeSort(org, lo, mid);
		mergeSort(org, mid + 1, hi);
		merge(org, lo, mid, hi);		
	}

}