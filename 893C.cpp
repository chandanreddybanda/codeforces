#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map <ll,ll> dp;
ll v[100009],ans=0,k=INT_MAX;
void dft(ll st,ll n,ll a[])
{
	for(ll i=0;i<n;i++)
	{
		if(dp[st]==i&&v[i]==0)
		{
			v[i]=1;v[st]=1;
			k=min(k,min(a[st],a[i]));
			dp.erase(st);
			dft(i,n,a);
		}
	}
}
int main()
{
	ll n,m;
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
		if(!v[i])
		{
			v[i]=1;
			dft(i,n,a);
			if(k!=INT_MAX)
			ans=ans+k;
			else
			ans=ans+a[i];
			k=INT_MAX;
		}
	}
	cout<<ans;
}
/*
#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
long long t,n,j,i,m,k,l,sum=0;
long long a[maxn],p[maxn];
int sol(int m){
	if(p[m]==m) return m;
	return p[m]=sol(p[m]);
}

int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++){cin>>a[i];p[i]=i;}
	
	while(m--){
		cin>>j>>k;
		j=sol(j);
		k=sol(k);
		if(a[j]>a[k]) {
		p[j]=k;}
		else p[k]=j;
	}
for(i=1;i<=n;i++){
	if(p[i]==i) sum+=a[i];
}

cout<<sum;
}
*/

