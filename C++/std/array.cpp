#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;
 
int main()
{
    int i = 5;
    int j = i++;

    cout<<i<<endl;
    cout<<j<<endl;

    return 0;
}