#include <iostream>
#include <queue>
using namespace std;

class CmpNum{
      public:
      	bool operator()(int &n1, int &n2){
      		if(n1 > n2) return true;
      		return false;
      	}
};



int main(){

	priority_queue <int, vector<int>, CmpNum> pq;

	pq.push(10);
	pq.push(15);
	pq.push(25);
	pq.push(5);

	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}