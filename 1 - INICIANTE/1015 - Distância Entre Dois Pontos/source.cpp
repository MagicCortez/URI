#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(void)
{
	float x1, x2, y1, y2, distancia;
	cin >> x1 >>y1 >> x2 >> y2;
	distancia = sqrt((pow((x2-x1), 2))+(pow((y2-y1), 2)));
	printf("%0.4f\n", distancia);
	return 0;
}