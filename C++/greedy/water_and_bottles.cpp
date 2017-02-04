#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int T;
	cin>>T;

	int N, X;

	while(T--){
		cin>>N;
		cin>>X;

		int * array = new int[N];

		for(int i = 0; i < N; i++){
			cin>>array[i];
		}

		int capacitysum = 0;

		sort(array, array + N);

		for(int j = 0; j < N; j++){
			capacitysum += array[j];

			if(capacitysum == X){
				cout<<j+1<<endl;
				break;
			}

			if(capacitysum > X ){
				cout<<j<<endl;
				break;
			}
		}
	}
	return 0;
}