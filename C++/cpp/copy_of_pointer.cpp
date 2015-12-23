#include <iostream>
using namespace std;

void fun(int *k){
    cout<<"*k = "<<*k<<endl;
    *k = 30;
    cout<<"*k = "<<*k<<endl;
}
int main(){

    int *p = new int(10);
     *p = 20;
    cout<<"*p = "<<*p<<endl;

    fun(p);

    cout<<"*p = "<<*p<<endl;

	return 0;
}