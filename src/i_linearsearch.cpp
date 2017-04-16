#include <iostream>
#include <chrono>
#include "../include/funcoes.h"

double i_linear (int *v, int x, int n) {
	auto start = std::chrono::steady_clock::now();

	for (int i = 0; i < n; i++) {
		if (v[i] == x) {
	                auto end = std::chrono::steady_clock::now();
        	        double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();
                	return elapsed;

		}
	}

        auto end = std::chrono::steady_clock::now();
        double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();
        return elapsed;

}
