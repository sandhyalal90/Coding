#include <iostream>
using namespace std;

void find_union(int set_one[], int set_two[], int onelen, int twolen){
     int i=0;
     int j=0;
     int k = 0;
     int *unionarray = new int[onelen+twolen];
     while(i < onelen && j < twolen){
         if(set_one[i] < set_two[j]){
         	unionarray[k++] = set_one[i];
         	i++;
         	continue;
         }
         else if(set_one[i] == set_two[j]){
         	unionarray[k++] = set_one[i];
         	i++;
         	j++;
         }
         else {
         	unionarray[k++] = set_two[j];
         	j++;
         }
    }

    while(i < onelen){
    	unionarray[k++] = set_one[i++];
    }
    while(j<twolen){
        unionarray[k++] = set_two[j++];
    }
  
    for(int i=0;i<onelen+twolen;i++)
    	cout<<unionarray[i]<<" ";
    cout<<endl;
}
void find_intersect(int set_one[], int set_two[], int onelen, int twolen){
	int i=0;
	int j=0;
	int k=0;
	int len = onelen > twolen ? onelen : twolen;
	int *intersect_array = new int[len];

	while(i < onelen && j < twolen){
		if( set_one[i] < set_two[j]){
			i++;
			continue;
		}
		else if(set_one[i] == set_two[j]){
			intersect_array[k++] = set_one[i];
			i++;
			j++;
		}
		else{
			j++;
		}

	}
	for(int i=0;i<len;i++)
    	cout<<intersect_array[i]<<" ";
    cout<<endl;

}

int main(){

	int set_one[] = {1,2,3,4,5,6,7,8,12,15};
	int set_two[] = {2,4,5,6,9,10,11,12,13,14,15};

	int onelen = sizeof(set_one)/sizeof(int);
	int twolen = sizeof(set_two)/sizeof(int);

	find_union(set_one, set_two, onelen, twolen);
	find_intersect(set_one, set_two, onelen, twolen);
	return 0;
}