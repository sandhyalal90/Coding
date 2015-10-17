#include <iostream>       
#include <queue>          
#include <string>        

// try it on ideone.com

int main ()
{
  std::priority_queue<std::string> mypq;

  mypq.emplace("orange");
  mypq.emplace("strawberry");
  mypq.emplace("apple");
  mypq.emplace("pear");

  std::cout << "mypq contains:";
  while (!mypq.empty())
  {
     std::cout << ' ' << mypq.top();
     mypq.pop();
  }
  std::cout << '\n';

  return 0;
}