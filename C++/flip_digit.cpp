#include <iostream>
#include <stdio.h>

using namespace std;
int findComplement(int num) {
        int bin = 1;
        if(num == 1)
        return 0;
        if(num == 0)
        return 1;
        
        while( num > bin){
            bin = bin << 1;
        }
        
        bin = bin -1;

        cout<<bin<<endl;
        
        return bin^num;
}

int main(){

    cout<<findComplement(5);
  return 0;
}
