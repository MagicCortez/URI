#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int n, aux, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
	cin >> n;
	aux = n;
	while(n)
	{
		if(n >= 100)
		{
			cem++;
			n -= 100;
		}
		else if(n >= 50)
		{
			cinquenta++;
			n -= 50;
		}
		else if(n >= 20)
		{
			vinte++;
			n -= 20;
		}
		else if(n >= 10)
		{
			dez++;
			n -= 10;
		}
		else if(n >= 5)
		{
			cinco++;
			n -= 5;
		}
		else if(n >= 2)
		{
			dois++;
			n -= 2;
		}
		else
		{
			um++;
			n -= 1;
		}
	}
	cout << aux << endl << cem << " nota(s) de R$ 100,00" << endl;
	cout << cinquenta << " nota(s) de R$ 50,00" << endl;
	cout << vinte << " nota(s) de R$ 20,00" << endl;
	cout << dez << " nota(s) de R$ 10,00" << endl;
	cout << cinco << " nota(s) de R$ 5,00" << endl;
	cout << dois << " nota(s) de R$ 2,00" << endl;
	cout << um << " nota(s) de R$ 1,00" << endl;
	return 0;
}