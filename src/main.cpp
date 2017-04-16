#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "../include/funcoes.h"

using namespace std;

int main () {
	ofstream binR ("binariaR.dat", ios::app);
	ofstream binI ("binariaI.dat", ios::app);
	ofstream seqR ("sequencialR.dat", ios::app);
	ofstream seqI ("sequencialI.dat", ios::app);

	for (int n = 0; n <= 5000; n = n + 100) {
		double mediaBinR = 0;
		double mediaBinI = 0;
		double mediaSeqR = 0;
		double mediaSeqI = 0;

		int v[n];

		srand(time(NULL));

		int x = rand() % 100;

		for (int i = 0; i < n; i++) {
			v[i] = rand() % 100;
		}

		quickSort (v, 0, n);

		for (int i = 0; i < 10; i++) {
			mediaBinR += binarySearch (v, x, 0, n);
			mediaBinI += i_binary (x, v, 0, n);
			mediaSeqR += linearSearch (v, x, n);
			mediaSeqI += i_linear (v, x, n);
		}

		mediaBinR = mediaBinR/10;
		mediaBinI = mediaBinI/10;
		mediaSeqR = mediaSeqR/10;
		mediaSeqI = mediaSeqI/10;

		binR << n << " " << mediaBinR << endl;
		binI << n << " " << mediaBinI << endl;
		seqR << n << " " << mediaSeqR << endl;
		seqI << n << " " << mediaSeqI << endl;
	}

	binR.close();
	binI.close();
	seqR.close();
	seqI.close();

	return 0;
}
