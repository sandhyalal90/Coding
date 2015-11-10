#include <iostream>
#include <stack>
using namespace std;

int main(){

	int N;
	cin>>N;
	int *array = new int[N];
	for(int i=0;i<N;i++)
	cin>>array[i];
 
    int maxd, firstd, maxseq, firstseq;

    stack <int> stk;

    for(int i = 0;i<N;i++){

    	if(stk.empty() && array[i] == 1){
            stk.push(array[i]);
            continue;
    	}
    	else if(stk.top() == 1 && array[i] == 1){
            stk.push(array[i]);
            continue;
    	}
    	else if(stk.top() == 1 && array[i] == 2){
    		stk.pop();
    		continue;
    	}
    	else if(stk.top() == 2){
    		stk.push(array[i]);
    	}
    }

	return 0;
}