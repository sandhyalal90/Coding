#include <iostream>
using namespace std;

int merge(int array[], int start, int mid, int end){

	int left = mid-start+1;
	int right = end-mid;
	int L[left];
	int R[right];
	int inv_count = 0;

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
			inv_count = inv_count+(left-i);
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
	return inv_count;

}
int merge_sort(int array[], int start, int end){
   
   int inv_count = 0;
   if(start < end){
   int mid = (end-start)/2 + start;
   inv_count = merge_sort(array, start, mid);
   inv_count += merge_sort(array, mid+1, end);
   inv_count += merge(array, start, mid, end);
   }
   return inv_count; 
}
int main(){

    int array[] = {1,3,2,0};
    int len = sizeof(array)/sizeof(int);
    int inv = merge_sort(array, 0, len-1);
    cout<<inv<<endl;
	return 0;
}