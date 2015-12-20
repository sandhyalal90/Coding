#include <iostream>
using namespace std;

int main(){

    int number = 22;
    int &nptr = number;

    cout<<nptr<<endl;

    int number2 = 32;

    int *nptr2 = &number2;

    cout<<nptr2<<endl;

	return 0;
}