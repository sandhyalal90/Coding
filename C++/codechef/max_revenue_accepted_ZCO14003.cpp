#include <stdio.h>
#include <algorithm>

typedef unsigned long long u64_t;
typedef signed long long s64_t;
int main(){

    u64_t n;
    scanf("%llu",&n);

    static u64_t array[(5*10*10*10*10*10)+1];

    for(u64_t i = 0; i < n; i++){
    	scanf("%llu",&array[i]);
    }
    
    std::sort(array, array+n);
    u64_t max_budget = 0; 
    for(u64_t i = 0; i < n ;i++){
    max_budget = std::max(max_budget, array[i]*(n-i));
    }
    printf("%llu",max_budget);
	return 0;
}