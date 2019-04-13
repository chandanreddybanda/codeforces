#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll fu(string s,ll k,string a)
{
	ll count=0;
	for(ll i=0;i<s.length()-k+1;i++)
	{
		string b=s.substr(i,k);
		if(b==a)
		count++;
	}
	return count;
}
int main()
{
	ll n,m,k,c=0;
	cin>>n>>m>>k;
	char a[n][m];
	for(ll i=0;i<n;i++)
	for(ll j=0;j<m;j++)
	cin>>a[i][j];
	string b="";
	for(ll i=0;i<k;i++)
	b=b+".";
	for(ll i=0;i<n;i++)
	{
		string s1;
		for(ll j=0;j<m;j++)
		s1=s1+a[i][j];
		c+=fu(s1,k,b);
	}
	for(ll i=0;i<m;i++)
	{
		string s1;
		for(ll j=0;j<n;j++)
		s1=s1+a[j][i];
		c+=fu(s1,k,b);
	}
	if(k==1)
	cout<<c/2;
	else
	cout<<c;
}
