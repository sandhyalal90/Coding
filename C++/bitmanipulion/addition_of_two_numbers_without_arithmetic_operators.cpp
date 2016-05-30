#include<stdio.h>
#include<iostream>
using namespace std;

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i)? printf("1"): printf("0");
} 
int Add(int x, int y)
{
    while (y != 0)
    {
        int carry = x & y;  
	printf("carry = %d\n", carry);
        bin(carry);
	printf("\n");
        x = x ^ y; 
	printf("x = %d\n",x);
	bin(x);
	printf("\n");
        y = carry << 1;
	printf("y = %d\n", y);
	bin(y);
	printf("\n");
    }
    return x;
}
 
int main()
{
    int result = Add(15,31);
    printf("result = %d\n", result);
    bin(result);
    printf("\n");
    return 0;
}
