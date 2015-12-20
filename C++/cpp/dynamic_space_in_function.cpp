#include <iostream>
using namespace std;

int & fun(){
	int *k = new int(10);
	cout<<&k<<endl;
	return *k; 
}
int main(){
  
    int ptr = fun();

    cout<<&ptr<<endl;

	return 0;
}