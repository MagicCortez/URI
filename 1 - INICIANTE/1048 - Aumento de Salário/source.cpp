#include<stdio.h>

int main(void)
{
	float r;
	scanf("%f", &r);
	if(r > 0 && r<= 400.00)
	{
		printf("Novo salario: %.2f\n", (r +(r*0.15)));
		printf("Reajuste ganho: %.2f\n", (r*0.15));
		printf("Em percentual: 15 %%\n");
	}
	else if(r > 400.01 && r<= 800.00)
	{
		printf("Novo salario: %.2f\n", (r +(r*0.12)));
		printf("Reajuste ganho: %.2f\n", (r*0.12));
		printf("Em percentual: 12 %%\n");
	}
	else if(r > 800.01 && r<= 1200.00)
	{
		printf("Novo salario: %.2f\n", (r +(r*0.10)));
		printf("Reajuste ganho: %.2f\n", (r*0.10));
		printf("Em percentual: 10 %%\n");
	}
	else if(r > 1200.01 && r<= 2000.00)
	{
		printf("Novo salario: %.2f\n", (r +(r*0.07)));
		printf("Reajuste ganho: %.2f\n", (r*0.07));
		printf("Em percentual: 7 %%\n");
	}
	if(r > 2000.00)
	{
		printf("Novo salario: %.2f\n", (r +(r*0.04)));
		printf("Reajuste ganho: %.2f\n", (r*0.04));
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}