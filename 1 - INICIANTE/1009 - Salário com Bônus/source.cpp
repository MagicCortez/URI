#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	double n, h;
	string s;
	cin >> fixed >> setprecision(2);
	cin >> s >> n >> h;
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << (n + (h * 0.15)) << endl;
	return 0;
}