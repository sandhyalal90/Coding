#include <stdlib.h>
#include <stdio.h> 
#include <assert.h>

int add(int x, int y) {
    int carry = 0;
    int result = 0;
    int i;

    for(i = 0; i < 32; ++i) {
        int a = (x >> i) & 1;
        int b = (y >> i) & 1;
        result |= ((a ^ b) ^ carry) << i;
        carry = (a & b) | (b & carry) | (carry & a);
    }

    return result;
}

int main(){

 int result = add(10,24);

 printf("%d\n", result);
 
 return 0;
}
