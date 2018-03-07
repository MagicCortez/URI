#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(void){
	
	int n, q;

	cin>> n >> q;
	vector<int> vetor;
	int cont = 0;
	while(n !=0 && q!=0){

		cont++;
		int num, eq;
		vetor.resize(n);
		for(int i = 0; i < n; i++){

			cin >> num;
			vetor[i] = num;
		}
		sort(vetor.begin(), vetor.end());
		cout << "CASE# " << cont << ":" << endl;
		for(int i = 0; i < q; i++){
			cin >> eq;
			bool flag = false;
			for(int i = 0; i < n; i++){

				if(vetor[i] == eq){

					flag = true;
					cout << eq << " found at " << (i + 1) << endl;
					break;		
				}
			}

			if(!flag)
				cout << eq << " not found" << endl;
			
		}

		cin >> n >> q;
	}

	return 0;
}