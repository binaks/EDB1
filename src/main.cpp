#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int main () {
	int x;
	int n;

	cout<<"Digite o tamanho do vetor: ";
	cin>>n;

	int v[n];
	
	cout<<"Digite um inteiro: ";
	cin>>x;

	srand(time(NULL));

	for (int i=0; i<n; i++) {
		v[i] = rand() % 100;
		
		cout<<v[i]<<" ";
	}
	
	cout<<endl;
}
