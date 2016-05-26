#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void print(std::vector<int> &v){
	std::vector<int>::iterator iter;
	for(iter = v.begin(); iter != v.end();iter++)
		cout<<*iter<<" ";
	cout<<"\n";

}
int main(){

	vector <int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);

	print(v);

	return 0;
}