#include <iostream>
using namespace std;
bool isUniqueElements(int array[], int len ) {
int checker = 0;
for (int i = 0 ; i < len; i++) {
     int val = array[i];
     if ((checker & (1 << val)) > 0) {
               return false; 
         }
        checker |= (1<< val);
    }
return true;
}


int main(){
    
    int array[] = {-2,-1,1,-2,3,6,7,22};
    int size = sizeof(array)/sizeof(int);
    int d = isUniqueElements(array, size);

    if(d == 1)
    	cout<<"The elements are unique !!\n";
    else
    	cout<<"Some elements are repeating !! \n";

	return 0;
}