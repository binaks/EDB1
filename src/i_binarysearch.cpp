#include <iostream>
#include <chrono>
#include "../include/funcoes.h"

double i_binary (int x, int *v, int inicio, int fim) {
	auto start = std::chrono::steady_clock::now();

	int k;
	while (fim >= inicio) {
		k = (fim + inicio)/2;
		if (v[k] == x) {
 	               auto end = std::chrono::steady_clock::now();
        	        double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();
                	return elapsed;

		}
		else if (v[k] < x) inicio = k+1;
		else if (v[k] > x) fim = k-1;
	}

        auto end = std::chrono::steady_clock::now();
        double elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();
        return elapsed;
}
