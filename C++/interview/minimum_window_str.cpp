#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

using namespace std;

bool minWindow(const char* S, const char *T, int &minWindowBegin, int &minWindowEnd) {
  int sLen = strlen(S);
  int tLen = strlen(T);
  int needToFind[256] = {0};
 
  for(int i = 0; i < tLen; i++)
      needToFind[T[i]]++;
 
  int hasFound[256] = {0};
  int minWindowLen = INT_MAX;
  int count = 0;

  for(int begin = 0, end = 0; end < sLen; end++) {
    if(needToFind[S[end]] == 0) continue;
        hasFound[S[end]]++;
    if(hasFound[S[end]] <= needToFind[S[end]])
        count++;
    if(count == tLen) {
      while(needToFind[S[begin]] == 0 || hasFound[S[begin]] > needToFind[S[begin]]){
        if(hasFound[S[begin]] > needToFind[S[begin]])
           hasFound[S[begin]]--;
           begin++;
      }
      int windowLen = end - begin + 1;
      if(windowLen < minWindowLen){
         minWindowBegin = begin;
         minWindowEnd = end;
         minWindowLen = windowLen;
      } 
    } 
  }
  return (count == tLen) ? true : false;
}

int main(){
  
  char S[] = "this is a test string";
  char T[] = "tist";

  char SS[] = "1234500005001267";
  char TT[] = "51";

  int begin;
  int end; 

  int b = minWindow(SS, TT, begin, end);

  cout<<b<<endl;

  cout<<begin<<endl;
  cout<<end<<endl;

  return 0;
}