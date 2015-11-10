#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){

 int N;
 cin>>N;
 
 int *array = new int[N];
 for(int i=0;i<N;i++){
   cin>>array[i];
 } 
 
 qsort (array, N, sizeof(int), compare);
 
 long long max_val=0;
 long long cmax;
 
 for(int i = 0; i < N; i++){
  cmax = array[i]*(N-i);
  if(cmax > max_val)
  max_val = cmax;
    
 }
 
 printf("%lld",max_val);
 
 return 0;
 } 
