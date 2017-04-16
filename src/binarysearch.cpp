#include <iostream>
#include <chrono>
#include "../include/funcoes.h"

double binarySearch (int *v, int x, int inicio, int fim) {
	auto start = std::chrono::steady_clock::now();

	if (fim < inicio) {
		auto end = std::chrono::steady_clock::now();
		double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count(); 
		return elapsed;
	}

	int k = (fim + inicio)/2;

	if (v[k] == x) {
                auto end = std::chrono::steady_clock::now();
                double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();
                return elapsed;
	}

	if (v[k] < x) return binarySearch(v, x, k+1, fim);

	return binarySearch(v, x, inicio, k-1);
}
