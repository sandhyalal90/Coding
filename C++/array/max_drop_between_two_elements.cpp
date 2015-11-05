//Given an array of integer, find the maximum drop between two array elements, given that second element comes after the first one.
//More generalized form of the problem where attempting to get the maximum a[m] - a[n] where m - n >= 1 instead of m - n == 1

#include <iostream>
using namespace std;

int maxDrop(int arr[], int length){
  
    if(length == 0){
        return -1;
    }

    int bestDiff = -1;
    int max = arr[0];
    int currentDiff = -1;
    //cout<<"Start !!"<<endl;
    //cout<<" bestDiff = "<<bestDiff<<" max = "<<max<<" currentDiff = "<<currentDiff<<endl;
    
    for(int i = 0; i < length; i++){
        int val = arr[i];

        if(val > max){
            max = val;
            currentDiff = -1;
        }
        else{
            int diff = max - val;
            if(diff > currentDiff){
                currentDiff = diff;
                if(currentDiff > bestDiff){
                    bestDiff = currentDiff;
                }
            }
        }
    }
    return bestDiff;
}

int main(){
    
    int array[] = {21,14,25,15,12,7,6,2,30,1,32};
    int len = sizeof(array)/sizeof(int);
    int d = maxDrop(array, len);
    cout<<"The maximum drop between two elements :" <<d<<endl;
    return 0;
}