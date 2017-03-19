#include <iostream>
#include "../include/questao6/bternaria.h"

bool busca_ternaria (int *v, int ini, int fim, int x) {
	if (ini > fim) return false;
	int k = (ini + fim)/2;
	int mid1 = (k + ini)/2;
	int mid2 = (k + fim)/2;

	if (v[mid1] == x) return true;
	if (v[mid2] == x) return true;
	if (v[mid1] > x) return busca_ternaria (v, ini, mid1 -1, x);
	if (v[mid2] < x) return busca_ternaria (v, mid2 + 1, fim, x);
	else return busca_ternaria (v, mid1 + 1, mid2 - 1, x);
}