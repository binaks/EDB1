#include <iostream>
#include "../include/funcoes.h"

bool i_binary (int x, int *v, int inicio, int fim) {
	int k;
	while (fim >= inicio) {
		k = (fim + inicio)/2;
		if (v[k] == x) return true;
		else if (v[k] < x) inicio = k+1;
		else if (v[k] > x) fim = k-1;
	}
	return false;
}
