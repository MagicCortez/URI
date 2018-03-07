#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	double a, b, c, MEDIA;
	cin >> fixed >> setprecision(1);
	cin >> a >> b >> c;
	MEDIA = ((a*0.2) + (b*0.3) + (c*0.5));
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << MEDIA << endl;
	return 0;
}