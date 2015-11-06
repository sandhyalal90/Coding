#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <iomanip>
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
 
    int N;
    cin>>N;
    int a;
    while(N--){
        cin>>a;
        maxQ.push(a);
        if (maxQ.size()-1 > minQ.size())
             minQ.push(maxQ.top()),maxQ.pop();
        else if (!minQ.empty() && maxQ.top() > minQ.top()) {
            maxQ.push(minQ.top()), minQ.pop();
            minQ.push(maxQ.top()), maxQ.pop();
        }
        
        if (maxQ.size() > minQ.size()) 
            printf("%d.0\n", maxQ.top());
        else {
            float a = maxQ.top() + minQ.top();
            cout<<fixed<<setprecision(1);
            cout<<a/2<<endl;
            
        }
    }
}