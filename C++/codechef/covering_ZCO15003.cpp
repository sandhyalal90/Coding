#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define pair1 pair<int,int>
 
int main() 
{
	int i,n,ans=1;
	scanf("%d",&n);
	pair1 p[n],cur;
	for(i=0;i<n;i++)
	 scanf("%d%d",&p[i].first, &p[i].second);
     sort(p,p+n);

	cur=p[0];
	for(i=1;i<n;i++)
	{
		if(p[i].first<=cur.second)
		{
			cur.first=p[i].first;
			if(p[i].second<cur.second)
			 cur.second=p[i].second;
		}
		else
		{
			cur=p[i];
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
} 
