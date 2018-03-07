#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	float valor1, valor2;
	int cod1, cod2, qnt1, qnt2;
	
	cin >> cod1 >> qnt1 >> valor1 >> cod2 >> qnt2 >> valor2;
	
	printf("VALOR A PAGAR: R$ %0.2f\n", ((qnt1*valor1) + (qnt2*valor2)));
	
	return 0;
}