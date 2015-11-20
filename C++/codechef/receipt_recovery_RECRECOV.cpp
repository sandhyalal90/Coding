#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <cstring>
#include <iomanip>
#include <cctype>
#include <map>
 
using namespace std;
 
const int N = 205;
 
long long cap[N][N];
long long fnet[N][N];
int Prev[N];
 
int n;
 
const long long INFY = 10000000000000000LL;
 
long long maxflow(int s,int t) {
    for(int i = 0;i <= n;i++)
        for(int j = 0;j <= n;j++)
            fnet[i][j] = 0;
    long long flow = 0;
    while(true) {
        for(int i = 1;i <= n;i++) Prev[i] = 0;
        Prev[s] = -1;
        queue<int> q;
        q.push(s);
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            for(int v = 1;v <= n;v++) {
                if(Prev[v] == 0 && fnet[u][v] - fnet[v][u] < cap[u][v]) {
                    Prev[v] = u;
                    q.push(v);
                }
            }
        }
        if(!Prev[t]) break;
        long long bot = INFY;
        for(int v = t,u = Prev[v];u > 0;v = u, u = Prev[u]) {
            bot = min(cap[u][v] - fnet[u][v] + fnet[v][u],bot);
        }
        flow+=bot;
        for(int v = t,u = Prev[v];u > 0;v = u, u = Prev[u])
            fnet[u][v]+=bot;
    }
    return flow;
    
}
 
 
void solve() {
    int n,m; cin>>n>>m;
    ::n = 2 * n + 2;
    for(int i = 1;i <= ::n;i++) {
        for(int j = 1;j <= ::n;j++) {
            cap[i][j] = 0;
        }
    }
    for(int i = 1;i <= n;i++) {
        cap[1][i + 1] = 1;
        cap[i + n + 1][::n] = 1;
    }
    for(int i = 0;i < m;i++) {
        int x,y; scanf("%d %d",&x,&y);
        cap[x + 1][y + n + 1] = 1;
    }
    cout<<n - maxflow(1,::n)<<endl;
}
 
int main() {
    int t; cin>>t;
    while(t--) {
        solve();
    }
} 