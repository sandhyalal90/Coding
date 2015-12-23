
#include <iostream>
using namespace std;

int fun(int *ptr){
   int k = 35;
   //ptr = &k;  // viola !!
   *ptr = 40;
}
int main(){

	int number = 20;
	int *ptr;
	ptr = &number;
	cout<<*ptr<<endl;
    fun(ptr);
    cout<<*ptr<<endl;
	return 0;
}