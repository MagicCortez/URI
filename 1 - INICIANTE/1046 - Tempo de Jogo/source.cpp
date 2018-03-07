#include<iostream>

using namespace std;

int main(void){
	
	int inicio, final, total;

	cin >> inicio >> final;

	if(inicio == final)
		total = 24;
	if(inicio < final)
		total = final - inicio;
	if(inicio > final)
		total = 24 - inicio + final;

	cout << "O JOGO DUROU " << total << " HORA(S)" << endl;

	return 0;
}