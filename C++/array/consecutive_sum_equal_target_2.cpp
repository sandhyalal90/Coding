#include <iostream>
using namespace std;

bool isConsecutiveSum(){

}
int main(){

    int array[] = {1,3,2,4,5,6,0,-2,9};
    int len = sizeof(array)/sizeof(int);
    bool b = isConsecutiveSum(array, len, 12);
    if(b == 1)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    
	return 0;
}