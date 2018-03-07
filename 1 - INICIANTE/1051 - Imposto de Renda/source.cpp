#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
	
	float s, temp, total = 0;

	cin >> s;



	if(s <= 2000.00)
		cout << "Isento" << endl;
	else{

		while(s > 0){

			if(s > 2000.00 && s <= 3000.00){

				temp = s - 2000.00;
				total += temp * 0.08;
				s -= 3000.00;
			}else if(s > 3000.00 && s <= 4500.00){

				temp = s - 3000.00;
				total += temp * 0.18;
				s -= temp;
			}else if(s > 4500.00){

				temp = s - 4500.00;
				total += temp * 0.28;
				s -= temp;
			}else{

				break;
			}


		}
		printf("R$ %.2f\n", total);
	}
	
	return 0;
}