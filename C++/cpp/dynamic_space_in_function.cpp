#include <iostream>
using namespace std;

int * fun(){
	int *k = new int(10);
	//cout<<&k<<endl;
	return k; 
}
int main(){
  
    int *ptr = fun();
    *ptr = 40;
    cout<<*ptr<<endl;

    int *nptr = fun();
    cout<<*nptr<<endl;

	return 0;
}