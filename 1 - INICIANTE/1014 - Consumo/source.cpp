#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int km;
	float consumo;
	cin >> km >> consumo;
	printf("%0.3f km/l\n", (km/consumo));
	return 0;
}