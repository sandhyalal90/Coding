#include <iostream>
using namespace std;

class Dog {
   int num;
   string name;

public:
	Dog() {num = 10; name = "tummy"; }
	void setAge(const int &a ){
       cout<<"void setAge(const int a )"<<endl;
	}
	void setAge(int & a ){
       cout<<"void setAge(int a )"<<endl;
	}
};

int main(){
	Dog d;
	const int i = 6;
	d.setAge(i);
	int j = 10;
	d.setAge(j);
	cout<<i<<endl;
	return 0;
}