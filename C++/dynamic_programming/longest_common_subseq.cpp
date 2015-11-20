#include <iostream>
#include <string>
using namespace std;

int longest_common_subsequence(string str1, string str2){

	int len1 = str1.length();
	int len2 = str2.length();

	int** lcs_mat = new int*[len1+1];
    for(int i = 0; i < len1+1; ++i)
    lcs_mat[i] = new int[len2+1];

    for(int i=0;i<=len1;i++){
    	for(int j=0;j<=len2;j++){
    		lcs_mat[i][j] = 0; 
    	}
    }

    if(str1[0] == str2[0])
    	lcs_mat[0][0] = 1;

    for(int i=0;i<=len1;i++){
    	if(str2[0] == str1[i])
            lcs_mat[i][0] = 1;
    }
    for(int i=0;i<=len1;i++){
    	if(str2[i] == str1[0])
            lcs_mat[0][i] = 1;
    }

    for(int i=1;i<len1;i++){
    	for(int j=1;j<len2;j++){
    		if(str1[i] != str2[j])
    		    lcs_mat[i][j] = std::max(lcs_mat[i-1][j], lcs_mat[i][j-1]);
    	    else
    	    	lcs_mat[i][j] = 1+lcs_mat[i-1][j-1];
    	}
    }

    int max_lcs = 0;
    for(int i=0;i<=len1;i++){
    	for(int j=0;j<=len2;j++){
    		
    		if(lcs_mat[i][j] > max_lcs)
    			max_lcs = lcs_mat[i][j];
    	}
    }

    for(int i=0;i<=len1;i++){
    	for(int j=0;j<=len2;j++){
    		cout<<lcs_mat[i][j]<<" ";
    	}
    	cout<<endl;
    }

	return max_lcs;
}
int main(){

	string str1 = "ABCDEFG";
	string str2 = "PDCDKFHHHG";

	int lcs = longest_common_subsequence(str1, str2);

	cout<<lcs<<endl;
	return 0;
}