/* Question : Given two numbers a=12, b =36 write a method that return an integer 
value c=3612, with out using arithmetic and string operations. */

#include <iostream>
#include <stdio.h>
#define concanateNumbers(A,B) B##A

int main()
{
	int i = concanateNumbers(10,36);
	printf("%d\n",i);
	return 0;
}