#include <iostream>
using namespace std;

void selectionSort(int array[], int n){

	for(int i=0; i < n; i++){
		int min = array[i];
		int inndex = i;
		for(int j = i+1; j < n ; j++){
            if(array[j] < min){
            	inndex = j;
            }
		}
		int temp = array[i];
		array[i] = array[inndex];
		array[inndex] = temp;
	}
}

int main(){

    int array[] = { 3, 4, 5, 7, 2, 20, 10, 22, 11, 13, 12, 1, 0, 25 };
    int len = sizeof(array)/sizeof(int);
    selectionSort(array, len);

    cout<<"LEN="<<len<<endl;
    for( int i = 0; i < len; i++){
    	cout<<array[i]<<endl;
    }

	return 0;
}