#include <iostream>
using namespace std;

int main(){

	int m = 20;
	int *k = &m;

	cout<<*k<<endl;

	int *number = new int(30);

	int **nptr = &number;

	cout<<**nptr<<endl; 

	int *ptr1 = new int(10);

	int *kptr = ptr1;

	cout<<*kptr<<endl;

	int *number2 = new int(1000);

	int &nnptr = *number2;

	cout<<nnptr<<endl;  

	return 0;
}