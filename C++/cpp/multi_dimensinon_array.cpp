#include <iostream>
#include <ctime>
using namespace std;

int main(){
    
    cout<<time(NULL)<<endl;
    clock_t start_time = clock();
    cout<<"Start time:"<<start_time<<endl;

    int r = 6;
    int c = 5;
    int **ptr = new int *[r];
    for(int i=0;i<r;i++)
    	ptr[i] = new int[c];

    int count = 10;
    for(int i=0;i<r;i++)
    	for (int j = 0; j < c; j++){
    		ptr[i][j] = count++;
    }

    for(int i=0;i<r;i++){
    	cout<<"{";
    	for(int j=0;j<c;j++){
    		cout<<ptr[i][j]<<",";
    	}
    	cout<<"}\n";
    }
    clock_t end_time = clock();
    cout<<"End time:"<<end_time<<endl;

	return 0;
}