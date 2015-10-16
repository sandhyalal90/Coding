#include <iostream>
#include <queue>
using namespace std;

struct timeStamp{
   int hh;
   int mm;
   int ss;
};

class timeCmp{
    public:
    	bool operator()(timeStamp &t1, timeStamp &t2){
                if(t1.hh < t2.hh) return true;
                if(t1.hh == t2.hh && t1.mm < t2.mm) return true;
                if(t1.hh == t2.hh && t1.mm == t2.mm && t1.ss < t2.ss) return true;
                return false;
    	}
};
int main(){

    priority_queue <timeStamp, vector<timeStamp> ,timeCmp> pq;
    timeStamp timeArray[] = {{1,2,3},{12,44,45},{1,2,4}, {2,4,55}, {2,5,33}}; 
     
    for(int i=0;i<5;i++){
    	pq.push(timeArray[i]);
    }

    while(!pq.empty()){
    	cout<<pq.top().hh<<":"<<pq.top().mm<<":"<<pq.top().ss<<endl;
    	pq.pop();
    }

	return 0;
}