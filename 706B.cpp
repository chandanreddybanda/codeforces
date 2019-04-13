#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000009],d=0;
int main()
{
	ll n,q;
	cin>>n;
	ll k;
	for(ll i=0;i<n;i++)
	{
		cin>>k;
		dp[k]++;
	}
	for(ll i=1;i<100001;i++)
	dp[i]+=dp[i-1];
	cin>>q;
	while(q--)
	{
		cin>>k;
		if(k>100001)
		cout<<dp[100000]<<endl;
		else
		cout<<min(dp[k],1000000LL)<<endl;
	}
}
