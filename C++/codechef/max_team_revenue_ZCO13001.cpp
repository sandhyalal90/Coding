#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int N;
    cin>>N;
    int *array = new int[N];

    for(int i=0;i<N;i++){
       cin>>array[i];
    }

    int j,d,sum=0;
    for(int i=0;i<N;i++){
        for(j=i+1; j < N; j++){
        	d = abs(array[i]-array[j]);
            //cout<<d<<endl;
            sum = sum+d;
        }
    }
    cout<<sum;

	return 0;
}