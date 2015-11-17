#include <iostream>
#include <map>
using namespace std;

int main(){

	int vertex = 6;
	int adjmat[][6] = { { 0,0,0,0,0,0 },
	                               { 0,0,0,0,0,0 },
	                               { 0,0,0,0,0,0 },
	                               { 0,0,0,0,0,0 },
	                               { 0,0,0,0,0,0 },
	                               { 0,0,0,0,0,0 } };

	map <char, int> vertexmap;
	vertexmap['A'] = 0;
	vertexmap['B'] = 1;
	vertexmap['C'] = 2;
	vertexmap['D'] = 3;
	vertexmap['E'] = 4;
	vertexmap['F'] = 5;

	//cout<<vertexmap['E']<<endl;

	return 0;
}