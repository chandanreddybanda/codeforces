#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll dp[10000];
void fib(ll n)
{
	ll a=1,b=1;
	for(ll i=0;i<=16;i++)
	{
		dp[b]=1;
		ll c=b;
		b=a+b;
		a=c;
	}
}
int main()
{
	ll n;
	cin>>n;
	fib(n);
	for(ll i=1;i<=n;i++)
	{
		if(dp[i])
		cout<<"O"<<i;
		else
		cout<<"o";
	}
}
