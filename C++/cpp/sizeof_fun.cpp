#include <stdio.h>
#include <iostream>
using namespace std;

#define my_sizeof(x) (&x+1) - (&x) 

int main(){
    
    float y;

    int p = my_sizeof(y);

    cout<<"\n"<<&y+1<<endl;

    cout<<"\n"<<&y<<endl;

    cout<<"\n"<<p<<endl;

    cout<<(char*)(&y+1)-(char*)(&y)<<endl;

	return 0;
}