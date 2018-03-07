#include<iostream>

using namespace std;

int josephus(int n,int k){
      
      if(n==1)
      	return 1;
      else
     	 return (josephus(n-1,k)+k-1)%n+1;
}

int main(void){
	
	int nc, n, k;

	cin >> nc;

	for(int i = 0; i < nc; i++){

		cin >> n >> k;

		cout << "Case " << i+1 << ": "<< josephus(n, k) << endl;

	}


	return 0;
}