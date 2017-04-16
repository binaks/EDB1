#include <iostream>
#include <chrono>
#include "../include/funcoes.h"

double linearSearch (int *v, int x, int n) {
	auto start = std::chrono::steady_clock::now();

	if (n == 0) {
                auto end = std::chrono::steady_clock::now();
                double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();
                return elapsed;
	}

	if (v[n-1] == x) {
                auto end = std::chrono::steady_clock::now();
                double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();
                return elapsed;
	}

	return linearSearch(v, x, n-1);
}
