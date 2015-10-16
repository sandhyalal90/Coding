#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

class CmpNum_1{
      public:
        bool operator()(int &n1, int &n2){
          if(n2 < n1) return true;
          return false;
        }
};

class CmpNum_2{
      public:
        bool operator()(int &n1, int &n2){
          if(n2 > n1) return true;
          return false;
        }
};

int main() {
    
    priority_queue <int, vector <int>, CmpNum_2 > maxQ;
    priority_queue <int, vector <int>, CmpNum_1 > minQ;

    maxQ.push(1);
    maxQ.push(12);
    maxQ.push(21);
    maxQ.push(11);
    maxQ.push(10);
    maxQ.push(51);
    maxQ.push(77);
    maxQ.push(-1);
    maxQ.push(-13);
    maxQ.push(15);

    minQ.push(1);
    minQ.push(12);
    minQ.push(21);
    minQ.push(11);
    minQ.push(10);
    minQ.push(51);
    minQ.push(77);
    minQ.push(-1);
    minQ.push(-13);
    minQ.push(15);

    while(!maxQ.empty()){
        cout<<maxQ.top()<<" ";
        maxQ.pop();
    }
    cout<<endl;
    while(!minQ.empty()){
        cout<<minQ.top()<<" ";
        minQ.pop();
    }
    cout<<endl;




    
}
