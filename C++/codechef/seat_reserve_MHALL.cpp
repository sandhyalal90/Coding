#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int T;
    scanf("%d",&T);

    int total;
    int reserve;
    while(T--){
       scanf("%d",&total);
       scanf("%d",&reserve);

       int *seat = new int[total+1];
       int k;
       for(int i=1;i<=reserve;i++){
          scanf("%d",&k);
          seat[k] = 1;
       }
       
       for(int i=1;i<=total;i++){
       	   if(seat[i] == 0)
       	   	printf("%d ",i);
       }
    }

	return 0;
}