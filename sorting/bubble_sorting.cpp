#include <iostream>
using namespace std;

void bubbleSort( int array[], int n){

	for( int i = 0; i < n ; i++ ){
		for(int j = i + 1; j < n; j++ ){
          if(array[i] > array[j]){
          	int temp 	= 	array[j];
          	array[j]	=   array[i];
          	array[i]    =   temp;
          }
		}
	}
}

int main(){

    int array[] = { 3, 4, 5, 7, 2, 20, 25, 22, 11, 13, 12, 1, 0};

    int len = sizeof(array)/sizeof(int);

    bubbleSort(array, len);

    cout<<"LEN="<<len<<endl;

    for( int i = 0; i < len; i++){

    	cout<<array[i]<<endl;

    }

	return 0;
}