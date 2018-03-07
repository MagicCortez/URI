#include<iostream>

using namespace std;

int main(void){
	
	int x, y, z;

	cin>> x >> y >> z;

	if(x < y && x < z && y < z )
		cout << x << endl << y << endl << z << endl;
	else if(x < y && x < z && y > z)
		cout << x << endl << z << endl << y << endl;
	else if(y < x && y < z && x < z)
		cout << y << endl << x << endl << z << endl;
	else if(y < z && y <z && x > z)
		cout << y << endl << z << endl << x << endl;
	else if(z < x && z < y && x < y)
		cout << z << endl << x << endl << y << endl;
	else if(z < x && z < y && x > y)
		cout << z << endl << y << endl << x << endl;

	cout << endl;

	cout << x << endl << y << endl << z << endl;

	return 0;
}