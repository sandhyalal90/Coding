#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    int N;
    int K;
    scanf("%d",&N);
    scanf("%d",&K);
    int count = 0;
   
    int *array = new int[N];
    for(int i=0;i<N;i++){
      scanf("%d",&array[i]);
    }
    for(int i=0;i<N;i++){
    	for(int j=i+1;j<N;j++){
    		if(abs(array[i]-array[j]) >= K)
    			count++;
    	}
    }
    printf("%d",count);

	return 0;
}