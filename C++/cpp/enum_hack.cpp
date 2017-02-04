#include <iostream>

using namespace std;

int main(){

	enum {SAN=10, DAN=20};

	int sarray[SAN];
	int darray[DAN];

	for(int i=0; i < SAN; i++){
		sarray[i] = i;
	}

	for(int i=0; i < SAN; i++){
		cout<<sarray[i]<<" ";
	}

	return 0;
}