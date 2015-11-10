#include <iostream>
#include <stack>
using namespace std;

int main(){

	int N;
	cin>>N;
	int *array = new int[N];
	for(int i=0;i<N;i++)
	cin>>array[i];
 
    int maxd=0, firstd, maxseq=0, firstseq;
    int cmaxdepth = 0;
    int cmaxseq = 0;

    stack <int> stk;

    for(int i = 0;i<N;i++){

    	if(stk.empty() && array[i] == 1){
            stk.push(array[i]);
            continue;
    	}
    	else if(stk.top() == 1 && array[i] == 1){
            stk.push(array[i]);
            if(stk.size() > cmaxdepth){
            	cmaxdepth = stk.size();
            	firstd = i+1;
            }
            if(cmaxdepth > maxd){
            	maxd = cmaxdepth;
            }
            continue;
    	}
    	else if(stk.top() == 1 && array[i] == 2){
    		stk.pop();
    		cmaxseq++;
    		if(stk.empty()){
    			if(cmaxseq > maxseq){
                  maxseq = cmaxseq;
                  firstseq = i-(2*maxseq)+2;    
                }
                
    			cmaxseq = 0;
    		}
    		continue;
    	}
    	else {
    		stk.push(array[i]);
    	}
    }
    cout<<maxd<<" "<<firstd<<" "<<2*maxseq<<" "<<firstseq;

	return 0;
}

// 1 1 1 2 1 2 2 2 1 1 2 1 2 1 1 1 2 2 2 1 2 1 2 2