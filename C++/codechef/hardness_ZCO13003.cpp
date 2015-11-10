#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){

	int N;
	scanf("%d",&N);
	int K;
	scanf("%d", &K);

	int *array = new int[N];
	for(int i=0;i<N;i++){
		scanf("%d",&array[i]);
	}
    
    int count = 0;
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(array[i]+array[j] < K){
					count++;
				}
		
			}
		}
	printf("%d",count);
	return 0;
}