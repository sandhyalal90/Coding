#include <iostream>
#include <cstdio>
using namespace std;

// int main(){
// 	int T;
// 	scanf("%d",&T);
// 	while(T--){
// 		int N;
// 		scanf("%d",&N);
//         int len=1;
//         int K = N;
// 		while(K > 9){
// 			K = K / 10;
// 			len = len * 10;
// 		}
//         //cout<<len<<endl;
//         int r = 0;
//         while(len > 10){
//         	r = N % len;
//         	len = len / 10;
//         	printf("%d\n", r);
//         }
//         printf("%d\n", r%10);

// 	}
// }

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		string str;
		cin>>str;

		int len = str.length();
		for(int i=0;i<len;i++){
           for(int j = i;j<len;j++)
           printf("%c",str[j]);
           printf("\n");
		}
	}
}