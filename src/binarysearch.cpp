#include <iostream>
#include "../include/funcoes.h"

bool binarySearch (int *v, int x, int inicio, int fim) {
	if (fim < inicio) return false;
	int k = (fim + inicio)/2;
	if (v[k] == x) return true;
	if (v[k] < x) return binarySearch(v, x, k+1, fim);
	return binarySearch(v, x, inicio, k-1);
}
