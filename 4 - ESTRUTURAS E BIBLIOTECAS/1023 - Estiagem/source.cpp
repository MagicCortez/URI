#include<iostream>
#include <iomanip>
#include<cmath>
#include<cstdio>
using namespace std;

int main(void){
	
	int n, x, y, tpessoa, cont = 0;
	double tm3;
	cin >> n;

	while(n != 0){

		cont++;
		int vector[201];
		tpessoa = 0;
		tm3 = 0;
		for(int i = 0; i < 201; i++)
			vector[i] = 0;
		for(int i = 0; i < n; i++){

			cin >> x >> y;
			tpessoa += x;
			tm3 += y;
			vector[(y/x)] += x;

		}

		cout << "Cidade# " << cont << ":" << endl;
		for (int i = 0; i < 201; i++)
    		if(vector[i] > 0)
    			cout << vector[i] << '-' << i << ' ';
    	cout << endl;

    	cout << "Consumo medio: " <<  floorf((double)(tm3/tpessoa) * 100) / 100 << " m3." << endl;
    	cout << endl;

		cin >> n;
	}

	return 0;
}