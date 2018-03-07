#include<iostream>
#include<vector>


using namespace std;


/**
*N = tamanho do bloco
*M = quantidade de tipos de bloco
*m = vetor com os tipos de blocos
*/
int numBlocos(int N, int M, vector<int> m) {
    
   vector<int> dp (N+1);

    
    dp[0] = 0;

    
    for(int i=1; i<=N; i++) {
        
        dp[i] = 1000002;

        for(int j=0; j<M; j++) {
            if(i-m[j] >= 0) {
                dp[i] = min(dp[i], dp[ i-m[j] ]+1);
            }
        }
    }

    // solução
    return dp[N];
}

int main(void){
	
	long int t, n, m;

	cin >> t;

	for(int i = 0; i< t; i++){

		cin >> n >> m;
		vector<int> bloco;
		int a, cont = 0;
		for(int k = 0; k < n; k++){

			cin >> a;
			bloco.push_back(a);
		}
		
		cout << numBlocos(m, n, bloco) << endl;
	}

	return 0;
}
