#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,a=0,b=0;
	cin>>n;
	string s,rs;
	cin>>s;
	for(ll i=0;i<n;i++)
	(s[i]=='1')?a++:b++;
	ll a1=a,b1=b;
	if(a==0||b==0)
	{
		cout<<"0";
		return 0;
	}
	ll i=0,j=n-1,k;
	while(i<j)
	{
		if(a==b)
		{k=j-i+1;break;}
		else if(a>b)
		{
			if(s[j]=='1'&&s[i]=='1')
			a--,i++;
			else if(s[j]=='0'&&s[i]=='0')
			b--,j--;
			else if(s[j]=='1'&&s[i]=='0')
			a--,j--;
			else
			a--,i++;
		}
		else
		{
			if(s[j]=='1'&&s[i]=='1')
			a--,i++;
			else if(s[j]=='0'&&s[i]=='0')
			b--,j--;
			else if(s[j]=='1'&&s[i]=='0')
			b--,i++;
			else
			b--,j--;
		}
	}
	reverse(s.begin(),s.end());
	i=0;j=n-1;b=b1;a=a1;
	while(i<j)
	{
		if(a==b)
		{cout<<max(k,j-i+1)<<endl;break;}
		else if(a>b)
		{
			if(s[j]=='1'&&s[i]=='1')
			a--,i++;
			else if(s[j]=='0'&&s[i]=='0')
			b--,j--;
			else if(s[j]=='1'&&s[i]=='0')
			a--,j--;
			else
			a--,i++;
		}
		else
		{
			if(s[j]=='1'&&s[i]=='1')
			a--,i++;
			else if(s[j]=='0'&&s[i]=='0')
			b--,j--;
			else if(s[j]=='1'&&s[i]=='0')
			b--,i++;
			else
			b--,j--;
		}
	}
}
