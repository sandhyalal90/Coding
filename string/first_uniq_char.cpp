#include <iostream>
#include <stdio.h>
using namespace std;

int firstUniqChar(string s) {
        
        int len = s.length();
        int hashmap[26] = {0};
        
        for(int i=0; i<len; i++){
            hashmap[(int)(s[i]-'a')]++;
        }
        
        int k=-1;
        for(int j = 0; j<len; j++){
            if(hashmap[(int)(s[j]-'a')] == 1)
            k = j;
            break;
        }
        
        return k;
}

int main(){

    cout<<firstUniqChar("leetcode")<<endl;
    return 0;
}