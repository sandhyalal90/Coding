#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<(n/26);i++)
        cout<<"abcdefghijklmnopqrstuvwxyz";
    string s="";
    for(int i=0;i<(n%26);i++){
        s.push_back('a'+i);
    }
    cout<<s;
    cout<<"\n";
}
int main(){
    int tCases;
    for(cin>>tCases;tCases--;)
        solve();
    return 0;
} 