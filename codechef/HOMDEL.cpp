#include <bits/stdc++.h>
using namespace std;

int main(){

	int T;
	scanf("%d", &T);
	vector< vector<int> > cost;
	cost.resize(T);
	for(int i=0; i<T; i++){
		cost[i].resize(T);
	}
	
	int temp;
	for(int i=0; i<T; i++){
		for(int j=0; j<T; j++){
		scanf("%d", &temp);
		cost[i][j] = temp;
		}
	}

	for(int k=0; k<T; k++){
		for(int i=0; i<T; i++){
			for(int j=0; j<T; j++){
				if(cost[i][k] + cost[k][j] < cost[i][j]){
					cost[i][j] = cost[i][k] + cost[k][j];
				}
			}
		}
	}

	int M;
	scanf("%d", &M);
	vector< vector<int> > SGD;
	SGD.resize(M);
	for(int i=0; i<M; i++){
		SGD[i].resize(3);
	}

	for(int i=0; i<M; i++){
		for(int j=0; j<3; j++){
		scanf("%d", &temp);
		SGD[i][j] = temp;
		}
	}

	for( int i=0; i<M; i++){
		
		int direct = cost[SGD[i][0]][SGD[i][2]];

		int indirect = cost[SGD[i][0]][SGD[i][1]] + cost[SGD[i][1]][SGD[i][2]]; 

		cout<<indirect<<" "<<indirect-direct<<endl;
	}

	return 0;
}
