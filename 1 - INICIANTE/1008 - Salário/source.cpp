#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	int n, h;
	double s;
	cin >> fixed >> setprecision(1);
	cin >> n >> h >> s;
	cout << fixed << setprecision(2);
	cout << "NUMBER = " << n << endl << "SALARY = U$ " << (h*s) << endl;
	return 0;
}