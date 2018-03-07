#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	cout << n/365<< " ano(s)" <<endl <<  (n%365)/30 << " mes(es)" <<endl << ((n%365)%30) << " dia(s)" << endl;
	return 0;
}