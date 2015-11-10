#include <iostream>
using namespace std;

int sum_digit(long long num){
  int sum = 0;
  if(num < 10 && num > 0)
  	return num;
  else{
     while(num > 9){
     int r = num % 10;
     num = num / 10;
     sum = sum + r;
    }
    sum = sum + num;
    if(sum < 10)
    	return sum;
    else
    	return sum_digit(sum);
  }
}

int sum_digit_logical(unsigned long long num){
   if(num < 10 && num > 0)
   	return num;
   int sum = 0;
   while(num > 9){
   	int r = num % 10;
   	num = num / 10;
   	sum = sum + r;
   }
   sum = sum + num;
   while(sum > 9)
   	sum = sum - 9;
   return sum;
}

int sum_of_digit_modulo(unsigned long long num){
	if(num <10 && num > 0)
		return num;
	int modd = num%9;
	if(modd == 0)
		return 9;
	else
		return modd;
}
int main(){

	// int k = sum_digit(1234567);
	// cout<<k<<endl;
	// int p = sum_digit_logical(1234567);
	// cout<<p<<endl;

    int T;
	cin>>T;
	long A;
	long D;
	long long S;
	long long  E;
	while(T--){
          cin>>A>>D>>S>>E;
          int ss = 0;
          for(unsigned long long i = S; i <= E ; i++){
          	unsigned long long tn = A + (i-1)*D;
            int k = sum_of_digit_modulo(tn);
            ss = ss + k;
          }
          cout<<ss<<endl;
	}
	return 0;
}