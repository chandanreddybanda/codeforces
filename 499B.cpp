#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	map <string,string> a;
	ll n,m;
	cin>>n>>m;
	for(ll i=0;i<m;i++)
	{
		string s,t;
		cin>>s>>t;
		a[s]=(t.length()<s.length()?t:s);
	}
	for(ll i=0;i<n;i++)
	{
		string s;
		cin>>s;
		cout<<a[s]<<" ";
	}
}
