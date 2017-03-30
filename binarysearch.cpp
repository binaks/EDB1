#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool binarySearch (int *v, int x, int inicio, int fim) {
	if (fim < inicio) return false;
	int k = (fim + inicio)/2;
	if (v[k] == x) return true;
	if (v[k] < x) return binarySearch(v, x, k+1, fim);
	return binarySearch(v, x, inicio, k-1);
}

int main () {
	int v[] = {1, 4, 7, 8, 10, 15};
	int x;

	cout << "Digite um valor inteiro: " << endl;
	cin >> x;

	if (binarySearch(v, x, 0, 5) == true) {
		cout << "Inteiro encontrado!" << endl;
	} else {
		cout << "Inteiro não encontrado!" << endl;
	}
	
	return 0;
}