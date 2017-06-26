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
 return 0;
}