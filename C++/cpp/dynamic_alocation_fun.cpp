#include <iostream>
using namespace std;
 
int * squarePtr(int);
int & squareRef(int);
 
int main() {
   int number = 8;
   cout << number << endl;  // 8
   int *sqrptr = squarePtr(number);
   int &sqrref = squareRef(number);

   cout<<*sqrptr<<endl;
   cout<<sqrref<<endl;

   int *dnumber = new int(20);

   int &numref = *dnumber;
   int *numptr = dnumber;

   cout<<numref<<endl;
   cout<<*numptr<<endl;
}
 
int * squarePtr(int number) {
   int * dynamicAllocatedResult = new int(number * number);
   return dynamicAllocatedResult;
}
 
int & squareRef(int number) {
   int * dynamicAllocatedResult = new int(number * number);
   return *dynamicAllocatedResult;
}