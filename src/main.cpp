#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/funcoes.h"

using std::cin;
using std::cout;
using std::endl;

int main () {
	int n;

	cout<<"Digite o tamanho do vetor: ";
	cin>>n;

	int v[n];

	srand(time(NULL));

	int x = rand() % 100;

	cout<<x<<endl;

	for (int i=0; i<n; i++) {
		v[i] = rand() % 100;
	}

	quickSort (v, 0, n);	

	for (int ii=0; ii<n; ii++) {
		cout<<v[ii]<<" ";
	}
		
	cout<<endl;
}
