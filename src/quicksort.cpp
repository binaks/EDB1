#include <iostream>
#include "../include/funcoes.h"

void quickSort (int *v, int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = v[(left + right) / 2];

	if (left < j)
		quickSort(v, left, j);
	if (i < right)
		quickSort(v, i, right);
}
