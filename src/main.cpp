#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/funcoes.h"

using std::cin;
using std::cout;
using std::endl;

int main () {
	int n;

	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	int v[n];

	srand(time(NULL));

	int x = rand() % 100;

	for (int i=0; i<n; i++) {
		v[i] = rand() % 100;
	}

	quickSort (v, 0, n);

	cout << "Busca binária recursiva: " << binarySearch (v, x, 0, n) << "ms" << endl;
	cout << "Busca binária iterativa: " << i_binary (x, v, 0, n) << "ms" << endl;
	cout << "Busca sequencial recursiva: " << linearSearch (v, x, n) << "ms" << endl;
	cout << "Busca sequencial iterativa: " << i_linear (v, x, n) << "ms" << endl;	
}
