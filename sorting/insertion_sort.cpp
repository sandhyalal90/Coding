#include <iostream>

using namespace std;

int insertionSort( int array[], int n){
	for(int i=1; i < n; i++){
       int value = array[i];
       int j = i - 1;
       while( value < array[j] && j >= 0){
       	array[j+1] = array[j];
       	j--;
       }
       array[j+1] = value;
	}
}

int main(){
 
	int array[] = { 3, 4, 5, 7, 2, 20, 10, 22, 11, 13, 12, 1, 0, 25 };
    insertionSort(array, 14);
    for( int i = 0; i < 14; i++){
    	cout<<array[i]<<endl;
    }

	return 0;
}