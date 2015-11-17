#include <iostream>
#include <cstdio>
using namespace std;

int main(){

	int T;
	scanf("%d",&T);
	int start;
	int end;
	while(T--){
         scanf("%d",&start);
         scanf("%d",&end);

       /*  if(start % 2 == 0)
         	start = start + 1;
         if(end % 2 == 0)
         	end = end -1 ;
         	*/

         for(int i = start;i <= end ; i = i+2){
         	printf("%d ",i);
         }
	}
	return 0;
}