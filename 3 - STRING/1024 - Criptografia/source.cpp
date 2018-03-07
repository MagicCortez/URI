#include<iostream>
#include<cstdio>
#include <ctype.h>

using namespace std;

int main(void){
	
	int n;

	cin >> n;
	getchar();
	for(int i = 0; i < n; i++){

		string p;
		getline(cin, p);
		string aux;
		char c; 
		int metade = p.size()/2;
		for(int k = (p.size() - 1); k >= 0; k--){

			if(isalpha(p[k])){

				int a = p[k];
				a += 3;
				c = (char)a;
			}else{

				c = p[k];
			}

			if(p.size() %2 == 0 && k < metade){

				int a = c;
				a -= 1;
				c = (char)a;
			}else if(p.size() %2 != 0 && k <= metade){

				int a = c;
				a -= 1;
				c = (char)a;
			}
			aux.push_back(c);
		}
		cout << aux << endl;
		aux.clear();
	}

	return 0;
}