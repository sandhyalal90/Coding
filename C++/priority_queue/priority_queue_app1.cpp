 // sort numbers on the basis of no 1 in binary format
 #include <iostream>
 #include <vector>
 #include <queue>

 using namespace std;

struct rank{
    int num;
    int noof_1;
};

class cmp{
    public:
 bool operator()(rank &n1, rank &n2){

          if(n2.noof_1 == n1.noof_1)
          return n2.num > n1.num;
          return n2.noof_1 > n1.noof_1;
          
      }
};

int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
    
void swap_array(vector < int > &a) {
priority_queue < rank, vector<rank>, cmp> pq;

    vector <rank> input;
    
    for(int k=0;k<a.size();k++)
    {
        rank r;
        r.num = a[k];
        r.noof_1 = countSetBits(a[k]);
            input.push_back(r);
    }
    
    input.clear();
    
    for(int i=0;i<a.size();i++){
        pq.push(input[i]);
    }

    for(int j=0;j<a.size();j++){
        a[j] = pq.top().num;
        pq.pop();
    }
}

int main(){

  
  vector <int> a;
  //a.push_back(5);
  a.push_back(31);
  a.push_back(14);
  a.push_back(15);
  a.push_back(7);
  a.push_back(2);
  swap_array(a);
  for(int i=0;i<a.size();i++)
    cout<<a[i]<<endl;

  return 0;
}

