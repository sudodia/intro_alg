#include <stdio.h>

void BinaryInsertionSort (int a[], int n);

int main() {
	int arr[10] = {1,3,2,5,4,6,7,8,5,6};

	BinaryInsertionSort(arr, 10);

	for (int i = 0; i < 10; i++)
		printf("%d  ", arr[i]);

	printf("\n");

	return 0;
}

void BinaryInsertionSort (int a[], int n) {
    register int i, m;
    int hi, lo, tmp;

    for (i = 1; i < n; i++) {
        lo = 0, hi = i;
        m = i / 2;

        do {
            if (a[i] > a[m]) 
                lo = m + 1;
            else if (a[i] < a[m])
                hi = m;
            else
                break;

            m = lo + ((hi - lo) / 2);
        } while (lo < hi);
 
        if (m < i) {
            tmp = a[i];
            memmove (a + m + 1, a + m, sizeof (int) * (i - m));
            a[m] = tmp;
        }
    }
}