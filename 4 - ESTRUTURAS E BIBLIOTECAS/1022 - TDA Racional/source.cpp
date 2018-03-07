#include <iostream>
#include<stdio.h>
#include <map>
#include <queue>
using namespace std;
 
int MDC(int a, int b){
  int resto;

  while(b != 0){
    resto = a % b;
    a = b;
    b = resto;
  }
	if(a < 0)
		a += a*-2;
  return a;
}
 
int main() {
	int n1,n2, d1, d2, t;
	queue<pair<int, int> > fila;
	pair<int, int> par;
	char p, c;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> n1;
		getchar();
		cin >> c;
		cin >> d1;
		getchar();
		cin >> p;
		cin >> n2;
		getchar();
		cin >> c;
		cin >> d2;
		switch(p)
		{
			case '+':
				par.first = (n1*d2 + n2*d1);
				par.second = (d1*d2);
				fila.push(par);
				break;
			case '/':
				par.first = (n1*d2);
				par.second = (n2*d1);
				fila.push(par);
				break;
			case '*':
				par.first = (n1*n2);
				par.second = (d1*d2);
				fila.push(par);
				break;
			case '-':
				par.first = (n1*d2 - n2*d1);
				par.second =(d1*d2);
				fila.push(par);
				break;
		}
	}
	while(!fila.empty())
	{
		int mdc;
		par = fila.front();
		fila.pop();
		mdc = MDC(par.first, par.second);
		cout << par.first << "/" << par.second << " = " << (par.first/mdc) << "/" << (par.second/mdc) << endl;
	}
	
	return 0;
}