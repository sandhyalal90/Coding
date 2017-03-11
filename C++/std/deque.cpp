#include <iostream>
#include <deque>

int main(){

std::deque<int> q = {1,2,3,4,5};

for(int i : q)
	std::cout<<i<<std::endl;

}