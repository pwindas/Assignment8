#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sorting(length) {
	srand (time(NULL));
	int i, j, l, m, p, q, c;
	int* arr1 = (int*)malloc(length*4);
	for (i = 0; i<length; i++) {
		int num = rand()%9+1;
		arr1[i] = num;
	}
	printf("\n\nThe first array is: \n");
	for (j = 0; j<length; j++) {
		printf("%d", arr1[j]);
	}
	int* arr2 = (int*)malloc(length*4);
	for (q=0; q<length; q++) {
		arr2[q]= arr1[q];
	}
	for (l=0; l<length; l++) {
		int x = arr2[l];
		int k = l - 1;
		while (k>=0&&arr2[k] > x) {
			arr2[k + 1] = arr2[k];
			k = k-1;
		}
		arr2[k+1] = x;
	}
	printf("\n\nThe second array is: \n");
	for (m=0; m<length;m++) {
		printf("%d ", arr2[m]);
	}
	int*arr3 = (int*)malloc(length*4);
	for (p=0; p<length; p++) {
		arr3[p] = arr2[(length-1)-1)-p];
	}
	printf("\n\nThe third array is: \n");
	for (c=0;c<length;c++) {
	printf("%d ", arr3[c]);
	}
	printf("\n");
	return 0;
}

int main() {
	int length;
	printf("Enter the length of array you want: \n");
	scanf("%d", &length);
	sorting(length);
}
