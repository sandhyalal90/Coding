#include <iostream>
#include <array>

int main(){

	std::cout<<"ABC"<<std::endl;

	std::array<int, 5> numbers = {1,2,3,4,5};

	std::array<int, 5> dest;

	std::reverse_iterator<int> r = numbers.rbegin();

	for( auto i : numbers)
		std::cout<<i<<std::endl;

	return 0;
}