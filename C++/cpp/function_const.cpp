#include <iostream>
using namespace std;

int fun(const int k) {
   return  5*k;
}
int main(){

    int p = 96;
	int k = fun(p);
	cout<<p<<" "<<k<<endl;
	return 0;
}