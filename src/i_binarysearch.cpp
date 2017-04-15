#include <iostream>
#include <ctime>
#include "../include/funcoes.h"

double i_binary (int x, int *v, int inicio, int fim) {
	clock_t tStart = clock();	

	int k;
	while (fim >= inicio) {
		k = (fim + inicio)/2;
		if (v[k] == x) return (clock() - tStart)/double(CLOCKS_PER_SEC)*1000;
		else if (v[k] < x) inicio = k+1;
		else if (v[k] > x) fim = k-1;
	}
	return (clock() - tStart)/double(CLOCKS_PER_SEC)*1000;
}
