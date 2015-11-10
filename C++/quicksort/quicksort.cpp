#include <iostream>
#include <cstdlib>
using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main ()
{
  int array[] = {45,2,3,67,89,12,90,12,25};
  int len = sizeof(array)/sizeof(int);
  qsort (array, len, sizeof(int), compare);

  for(int i=0;i<len;i++)
  	cout<<array[i]<<" ";
  cout<<endl;
  return 0;
}