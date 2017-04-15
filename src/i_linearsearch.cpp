#include <iostream>
#include <ctime>
#include "../include/funcoes.h"

double i_linear (int *v, int x, int n) {
	clock_t tStart = clock();

	for (int i = 0; i < n; i++)
		if (v[i] == x) return (clock() - tStart)/double(CLOCKS_PER_SEC)*1000;
	return (clock() - tStart)/double(CLOCKS_PER_SEC)*1000;
}
