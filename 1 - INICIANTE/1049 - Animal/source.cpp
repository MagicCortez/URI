#include<iostream>
#include<cstring>

using namespace std;

int main(void){
	
	string dica1, dica2, dica3;

	cin >> dica1 >> dica2 >> dica3;

	if(dica1.compare("vertebrado") == 0){

		if(dica2.compare("ave") == 0){

			if(dica3.compare("carnivoro") == 0)
				cout << "aguia" << endl;
			else if(dica3.compare("onivoro") == 0)
				cout << "pomba" << endl;
		}else if(dica2.compare("mamifero") == 0){

			if(dica3.compare("onivoro") == 0)
				cout << "homem" << endl;
			else if(dica3.compare("herbivoro") == 0)
				cout << "vaca" << endl;
		}

	}else if(dica1.compare("invertebrado") == 0){

		if(dica2.compare("inseto") == 0){

			if(dica3.compare("hematofago") == 0)
				cout << "pulga" << endl;
			else if(dica3.compare("herbivoro") == 0)
				cout << "lagarta" << endl;

		}else if(dica2.compare("anelideo") == 0){

			if(dica3.compare("hematofago") == 0)
				cout << "sanguessuga" << endl;
			else if(dica3.compare("onivoro") == 0)
				cout << "minhoca" << endl;

		}
	}

	return 0;
}