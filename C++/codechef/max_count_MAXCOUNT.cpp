#include <stdio.h>
using namespace std;

int main(){

  int T;
  scanf("%d",&T);

  while(T--){
  int A[10001];
  for(int i=0;i<10001;i++)
  A[i] = 0;

  int N;
  scanf("%d",&N);
  int K;
  for(int i=0;i<N;i++){
  scanf("%d",&K);
  A[K]++;
  }
  int maxcount = 0;
  int max = 0;
  for(int i=0;i<10001;i++){
    if(A[i] > maxcount){
      maxcount = A[i];
      max = i;
    }
  }
  printf("%d %d\n",max,maxcount);
  }
return 0;
}