#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int N;
	cin>>N;

	int *array = new int[N];

	for(int i = 0; i < N; i++){
		cin>>array[i];
	}

	sort(array, array+N);

	int maxdiff=0;
	int diff=0;
	for(int j = 0; j < N-2; j++){
       diff = array[j+2] - array[j];
       if(diff > maxdiff)
       	maxdiff = diff;
	}
    cout<<maxdiff<<endl;
	return 0;
}