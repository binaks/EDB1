#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "../include/funcoes.h"

using namespace std;

int main () {
	ofstream binR ("data/binariaR.dat");
	ofstream binRM ("data/binariaRM.dat");
	ofstream binRm ("data/binariaRm.dat");

	ofstream binI ("data/binariaI.dat");
	ofstream binIM ("data/binariaIM.dat");
	ofstream binIm ("data/binariaIm.dat");

	ofstream seqR ("data/sequencialR.dat");
	ofstream seqRM ("data/sequencialRM.dat");
	ofstream seqRm ("data/sequencialRm.dat");

	ofstream seqI ("data/sequencialI.dat");
	ofstream seqIM ("data/sequencialIM.dat");
	ofstream seqIm ("data/sequencialIm.dat");

	srand(time(NULL));

	for (int n = 0; n <= 1000; n = n + 100) {
		double bR;
		double mediaBinR = 0;
		double melhorCasoBR = 10;
		double piorCasoBR = 0;

		double bI;
		double mediaBinI = 0;
		double melhorCasoBI = 10;
		double piorCasoBI = 0;

		double sR;
		double mediaSeqR = 0;
		double melhorCasoSR = 10;
		double piorCasoSR = 0;

		double sI;
		double mediaSeqI = 0;
		double melhorCasoSI = 10;
		double piorCasoSI = 0;

		int v[n];

		for (int i = 0; i < n; i++) {
			v[i] = (rand() % 100) * i;
		}

		quickSort (v, 0, n);

		for (int j = 0; j < 100; j++) {
			int x = rand() % 100;

			bR = binarySearch (v, x, 0, n);
			mediaBinR += bR;
			if (bR < melhorCasoBR) melhorCasoBR = bR;
			if (bR > piorCasoBR) piorCasoBR = bR; 

			bI = i_binary (x, v, 0, n);
			mediaBinI += bI;
			if (bI < melhorCasoBI) melhorCasoBI = bI;
			if (bI > piorCasoBI) piorCasoBI = bI;

			sR = linearSearch (v, x, n);
			mediaSeqR += sR;
			if (sR < melhorCasoSR) melhorCasoSR = sR;
			if (sR > piorCasoSR) piorCasoSR = sR;

			sI = i_linear (v, x, n);
			mediaSeqI += sI;
			if (sI < melhorCasoSI) melhorCasoSI = sI;
			if (sI > piorCasoSI) piorCasoSI = sI;
		}

		binR << n << " " << mediaBinR/100 << endl;
		binRM << n << " " << melhorCasoBR << endl;
		binRm << n << " " << piorCasoBR << endl;

		binI << n << " " << mediaBinI/100 << endl;
		binIM << n << " " << melhorCasoBI << endl;
		binIm << n << " " << piorCasoBI << endl;

		seqR << n << " " << mediaSeqR/100 << endl;
		seqRM << n << " " << melhorCasoSR << endl;
		seqRm << n << " " << piorCasoSR << endl;

		seqI << n << " " << mediaSeqI/100 << endl;
		seqIM << n << " " << melhorCasoSI << endl;
		seqIm << n << " " << piorCasoSI << endl;
	}

	binR.close();
	binRM.close();
	binRm.close();

	binI.close();
	binIM.close();
	binIm.close();

	seqR.close();
	seqRM.close();
	seqRm.close();

	seqI.close();
	seqIM.close();
	seqIm.close();

	return 0;
}
