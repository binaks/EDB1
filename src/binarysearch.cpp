#include <iostream>
#include <ctime>
#include "../include/funcoes.h"

double binarySearch (int *v, int x, int inicio, int fim) {
	clock_t tStart = clock();

	if (fim < inicio) return (clock() - tStart)/double(CLOCKS_PER_SEC)*1000;
	int k = (fim + inicio)/2;
	if (v[k] == x) return (clock() - tStart)/double(CLOCKS_PER_SEC)*1000;
	if (v[k] < x) return binarySearch(v, x, k+1, fim);
	return binarySearch(v, x, inicio, k-1);
}
