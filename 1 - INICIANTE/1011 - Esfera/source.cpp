#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(void)
{
	double pi = 3.14159;
	double vol;
	cin >> vol;
	printf("VOLUME = %0.3f\n", ((4.0/3)*pi*pow(vol, 3)));
	return 0;
}