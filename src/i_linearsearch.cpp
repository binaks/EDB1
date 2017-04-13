#include <iostream>

bool i_linear (int *v, int x, int n) {
	for (int i = 0; i < n; i++)
		if (v[i] == x) return true;
	return false;
}
