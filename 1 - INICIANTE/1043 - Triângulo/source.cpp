#include<iostream>
#include<cstdlib>
#include <cstdio>
using namespace std;

int main(void){
	
	double a, b, c;

	cin >> a >> b >> c;
	if((labs((b - c)) < a && a < (b + c)) && (labs(a -c) < b && b < (a + c)) && (labs(a - b) < c && c <(a+b)))
		printf("Perimetro = %.1lf\n", (a+b+c));
	else
		printf("Area = %.1lf\n", ((a+b)*c) /2 );

	return 0;
}