#include <iostream>
using namespace std;

int * fun(){
	int *p = new int(10);
	return p;
}

int & ref_fun(){
  int *p = new int(30);
  return &p;
}

int main(){

	int *ptr = fun();
	cout<<*ptr<<endl;
	return 0;

	int k = ref_fun();
	cout<<k<<endl;
}