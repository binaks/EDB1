#include <iostream>
#include "../include/funcoes.h"

void quickSort (int *v, int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = v[(left + right) / 2];

	while (i <= j) {
		while (v[i] < pivot)
			i++;
		while (v[j] > pivot)
			j--;
		if (i <= j) {
			tmp = v[i];
			v[i] = v[j];
			v[j] = tmp;
			i++;
			j--;
		}
	}

	if (left < j)
		quickSort(v, left, j);
	if (i < right)
		quickSort(v, i, right);
}
