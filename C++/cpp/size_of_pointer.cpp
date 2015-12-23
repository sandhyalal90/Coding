#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    
    double *dptr;
    int *iptr;
    char *cptr;

    cout<<"Size of double ptr = "<<sizeof(dptr)<<endl; 
    cout<<"Size of int ptr = "<<sizeof(iptr)<<endl;
    cout<<"Size of cptr = "<<sizeof(cptr)<<endl;

    cout<<endl;
    int *p1[10][20];
    int (*p2)[10][20]; // dereferenced (content * 10 * 20)

    cout<<"Size of *p1 = "<<sizeof(*p1)<<endl;
    cout<<"Size of p1 = "<<sizeof(p1)<<endl;
    cout<<"Size of *p2 = "<<sizeof(*p2)<<endl;
    cout<<"Size of p2 = "<<sizeof(p2)<<endl;
    cout<<"Size of &p1 = "<<sizeof(&p1)<<endl;
    cout<<"Size of &p2 = "<<sizeof(&p2)<<endl;

	return 0;
}