#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	double x, y, MEDIA;
	cin >> fixed >> setprecision(1);
	cin >> x >> y;
	MEDIA = ((x * 3.5) + (y * 7.5)) / (3.5 + 7.5);
	cout << fixed << setprecision(5);
	cout << "MEDIA = " << MEDIA << endl;
	return 0;
}