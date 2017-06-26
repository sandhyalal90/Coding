#include <iostream>
#include <vector>

using namespace std;

int main(){

	int T;
	cin>>T;
	int t=T;

	vector <long long> v;
	while(T--){
		long long k;
		cin>>k;
		v.push_back(k);
	}

	int c = 0;
	while(c < t){

		long long p;
		p = (v[c]*v[c]+3*v[c])/2;
		cout<<p<<endl;
		c++;
	}
	return 0;
}