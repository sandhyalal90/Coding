#include <iostream>

using namespace std;

int main(){
	int N;
	scanf("%d",&N);
 
    int *aa = new int[];
    int *bb = new int[];

    for(int i=0;i<N;i++){
    	scanf("%d",&aa[i]);
    	scanf("%d",&bb[i]);
    }
    
    return 0;
}