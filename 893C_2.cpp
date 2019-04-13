#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxn=1e5+7;
int main()
{
	ll n,m,ans=0;
	cin>>n>>m;
	ll dp[n+1],v[n+1];
	for(ll i=0;i<n;i++)
	{
		cin>>dp[i];
		v[i]=dp[i];
	}
	for(ll i=0;i<m;i++)
	{
		ll x,y;
		cin>>x>>y;x--;y--;
		v[x]=v[y]=min(min(dp[x],dp[y]),min(v[x],v[y]));
	}
	for(ll i=0;i<n;i++)
	if(dp[i]==v[i])
	ans+=v[i];
	cout<<ans%100000<<endl;
}
