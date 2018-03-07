#include<stdio.h>
#include<math.h>
#define PI 3.14159


int main(void)
{
	double r;
	scanf("%lf", &r);
	printf("A=%.4lf\n", (PI*(pow(r,2))));
	return 0;
}