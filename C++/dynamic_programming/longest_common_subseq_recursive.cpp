#include <iostream>
#include <string>
using namespace std;

int longest_common_sub(string str1, string str2, int i, int j, int len1, int len2 ){
  
  if(i == len1 -1 && j == len2 -1 && str1[i] == str2[j])
     return 1; 
  if(i < len1 && j < len2){
  	if(str1[i] == str2[j]){
  		return 1+longest_common_sub(str1, str2, i+1,j+1, len1, len2);
  	}
  	else 
  		return std::max(longest_common_sub(str1, str2, i+1, j, len1, len2), longest_common_sub(str1, str2, i, j+1, len1, len2));
  }
  return 0;
}
int main(){
    
    string str1 = "ABCDEFGH";
    string str2 = "abcdefgABDFC";

    int n = longest_common_sub(str1, str2, 0, 0, str1.length(), str2.length());
    cout<<n<<endl;
	return 0;
}