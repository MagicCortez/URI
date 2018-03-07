#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(void)
{
	double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
	
	cin >> a >> b >> c;
	triangulo = (a*c)/2;
	circulo = pow(c, 2)*3.14159;
	trapezio = ((a+b)*c)/2;
	quadrado = b*b;
	retangulo = a*b;
	printf("TRIANGULO: %0.3f\nCIRCULO: %0.3f\nTRAPEZIO: %0.3f\nQUADRADO: %0.3f\nRETANGULO: %0.3f\n", triangulo, circulo, trapezio, quadrado, retangulo);
	
	return 0;
}