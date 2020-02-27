#include"Header.h"
#include <stdbool.h>
#include <stdio.h>
#include < stdlib.h >
#include <math.h>

int main()
{

	int A[] = { 1, 9, 17, 45 ,-3 , 13, 103, 26, 34 };

	int n = sizeof(A) / sizeof(A[0]);

	int p = 0;
	int r = n - 1;

	MergeSort(A, p, r);

	printArray(A, n);

}


