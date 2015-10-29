#include <iostream>
using namespace std;

bool isUniqueElements(char array[], int len ) {
int checker = 0;
for (int i = 0 ; i < len; i++) {
     int val = array[i]-'a';
     //cout<<val<<endl;
     if ((checker & ( 1 << val)) > 0) {
               return false; 
         }
        checker |= ( 1 << val );
    }
return true;
}

int main(){
    
    char array[] = {'a','b','c','d','e','f','g','h','a'};
    int size = sizeof(array)/sizeof(char);
    int d = isUniqueElements(array, size);

    if(d == 1)
    	cout<<"The elements are unique !!\n";
    else
    	cout<<"Some elements are repeating !! \n";

	return 0;
}