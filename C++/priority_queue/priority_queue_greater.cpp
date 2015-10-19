#include <iostream>
#include <queue>
using namespace std;

int main(){

    priority_queue <int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(4);
    pq.push(-1);

    while(!pq.empty()){
    	cout<<pq.top()<<endl;
    	pq.pop();
    }

    cout<<endl;

    priority_queue <int, vector<int>, greater<int> > pq_greater;
    pq_greater.push(1);
    pq_greater.push(5);
    pq_greater.push(3);
    pq_greater.push(4);
    pq_greater.push(-1);

    while(!pq_greater.empty()){
    	cout<<pq_greater.top()<<endl;
    	pq_greater.pop();
    }

	return 0;
}