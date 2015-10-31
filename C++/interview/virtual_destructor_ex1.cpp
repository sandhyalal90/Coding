#include <iostream>
using namespace std;


class Base
{
   	public:
      	Base(){ cout<<"Constructing Base\n";}
      	
     // this is a destructor:
	
	    virtual ~Base(){ cout<<"Destroying Base";}
};

class Derive: public Base
{
        public:
       	Derive(){ cout<<"Constructing Derive\n";}
       	
       	~Derive(){ cout<<"Destroying Derive\n";}
 };

int main()
{
    	Base *basePtr = new Derive();
        
      //delete basePtr;

        return 0;
}