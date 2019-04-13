#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxn=1e5+7;
ll dp[maxn],k=maxn;
void rec(ll z,ll a[])
{
	if(dp[z]!=0)	
	{
		k=min(k,a[z]);
		rec(dp[z],a);
	}
}
int main()
{
	ll n,m,ans=0;
	cin>>n>>m;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	for(ll i=0;i<m;i++)
	{
		ll x,y;
		cin>>x>>y;
		dp[x-1]=y-1;
	}
	for(ll i=0;i<n;i++)
	{
		if(dp[i]!=0)
		{
			rec(i,a);
			if(k!=maxn)
			ans=ans+k;
			k=maxn;
		}
		else
		ans=ans+a[i];
	}
	cout<<ans<<endl;
}
