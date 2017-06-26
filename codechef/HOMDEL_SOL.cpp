#include <bits/stdc++.h>
typedef unsigned long long int ull;
typedef long long int ll;
using namespace std;
#define MOD 1000000007
 
ll i,j,t,m,n;
 
int main()
{
	cin>>n;
	ll graph[n][n];
	ll dist[n][n];
 
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>graph[i][j];
			dist[i][j] = graph[i][j];
		}
 
	for(ll v=0;v<n;v++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				dist[i][j] = min(dist[i][j],dist[i][v]+dist[v][j]);
			}
		}
	}
 
	cin>>m;
	ll s,g,d;
	while(m--)
	{
		cin>>s>>g>>d;
		cout<<(dist[s][g]+dist[g][d])<<" "<<(dist[s][g]+dist[g][d]-dist[s][d])<<endl;
	}
 
 
    return 0;
} 