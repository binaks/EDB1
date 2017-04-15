#include <iostream>
#include <ctime>
#include "../include/funcoes.h"

double linearSearch (int *v, int x, int n) {
	clock_t tStart = clock();

	if (n <= 0) return (clock() - tStart)/double(CLOCKS_PER_SEC)*1000;
	if (v[n-1] == x) return (clock() - tStart)/double(CLOCKS_PER_SEC)*1000;
	return linearSearch(v, x, n-1);
}
