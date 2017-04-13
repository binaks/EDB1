#include <iostream>

bool linearSearch (int *v, int x, int n) {
	if (n <= 0) return false;
	if (v[n-1] == x) return true;
	return linearSearch(v, x, n-1)
}
