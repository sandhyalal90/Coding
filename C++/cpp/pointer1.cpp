#include <iostream>
using namespace std;

int main(){

	int *ptr;
	int ram = 20;

	ptr = &ram;

	cout<<*ptr<<endl;

	int temp = *ptr;

	cout<<temp<<endl;

	char *p = 'c';

	cout<<*p<<endl;

	return 0;
}