#include<iostream>

using namespace std;

int main(void){
	
	int hinicial, minicial, hfinal, mfinal, htotal, mtotal;

	cin >> hinicial >> minicial >> hfinal >> mfinal;

	if(hinicial == hfinal){

		htotal = 24;
		mtotal = 0;
	}
	if(hinicial < hfinal){

		htotal = hfinal - hinicial;
		if(minicial < mfinal)
			mtotal = mfinal - minicial;
		if(minicial > mfinal){
			 htotal--;
			 mtotal = 60 - minicial + mfinal;
		}

	}
	if(hinicial > hfinal){

		htotal = 24 - hinicial + hfinal;
		if(minicial < mfinal)
			mtotal = mfinal - minicial;
		if(minicial > mfinal){
			 htotal--;
			 mtotal = 60 - minicial + mfinal;
		}
	}

	cout << "O JOGO DUROU " << htotal << " HORA(S) E " << mtotal << " MINUTO(S)" << endl;

	return 0;
}