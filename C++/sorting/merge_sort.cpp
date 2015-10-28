#include <iostream>
using namespace std;

void merge(int array[], int start, int mid, int end){

	int left = mid-start+1;
	int right = end-mid;
	int L[left];
	int R[right];

	for(int i=0;i<left;i++)
        L[i] = array[start+i];
	for(int j=0;j<right;j++)
		R[j] = array[mid+1+j];

    int i = 0;
    int j = 0;
    int k = start;

	while(i < left && j < right){
		if(L[i] <= R[j]){
			array[k] = L[i];
			i++; 
		}
		else{
			array[k] = R[j];
			j++;
		}
		k++;
	}

	while(i < left){
		array[k] = L[i];
		i++;
		k++;
	}

	while(j < right){
        array[k] = R[j];
        j++;
        k++;
	}

}
void merge_sort(int array[], int start, int end){
   
   if(start < end){
   int mid = (end-start)/2 + start;
   merge_sort(array, start, mid);
   merge_sort(array, mid+1, end);
   merge(array, start, mid, end);
   } 
}
int main(){

    int array[] = {1,3,12,4,5,7,14,12,18,2,4};
    int len = sizeof(array)/sizeof(int);
    merge_sort(array, 0, len-1);
    for(int i=0;i<len;i++)
    	cout<<array[i]<<" ";
    cout<<endl;
	return 0;
}