#include <iostream>
#include <stdio.h>

using namespace std;

int countSegments(string s) {
        int len = s.length();
        int scount = 0;
        for(int i = 0; i < len; i++){
            if(isspace(s[i]))
            scount++;
        }
        return scount;
}

string reverseVowels(string s) {
        int len = s.length();
        int lastptr = len-1;
        int startptr = 0;

        while( startptr < lastptr ){
        	while((s[startptr] != 'a' || s[startptr] != 'e' || s[startptr] != 'i' || s[startptr] != 'o' || s[startptr] != 'u') && (startptr < lastptr ))
        		startptr++;
        	while((s[lastptr] != 'a' || s[lastptr] != 'e' || s[lastptr] != 'i' || s[lastptr] != 'o' || s[lastptr] != 'u') && (startptr < lastptr))
        		lastptr--;

        	if(startptr < lastptr){


        		char temp   = s[startptr];
        		s[startptr] = s[lastptr];
        		s[lastptr]  = temp;
        		startptr++;
        		lastptr--;
        	}
        }
    return s;

}
int main(){
    //cout<<countSegments("hello, friends what are you doing");

	cout<<reverseVowels("hello")<<endl;
	return 0;
}