#include<bits/stdc++.h>
#define ll long long int
using namespace std;
string a,b;ll dp[100],l=0;
ll find(string s,char c,ll x)
{
	for(ll i=0;i<x;i++)
	if(s[i]==c&&!dp[i])
	{
		dp[i]=1;
		return 1;
	}
	return -1;
}
ll find_max(string s,char c,ll x)
{
	for(ll i=x-1;i>=0;i--)
	{
		if(s[i]<c&&!dp[i])
		{
			dp[i]=1;
			return i;
		}
	}
	return -1;
}
string s_sort(string a,string ans,ll x)
{
	string r="";ll k=0,m=ans.length();
	for(ll i=0;i<x;i++)
	if(!dp[i])
	r[k++]=a[i];
	sort(r.begin(),r.end());
	for(ll i=k-1;i>=0;i--)
	ans+=r[i];
	return ans;
}
int main()
{
	cin>>a>>b;
	sort(a.begin(),a.end());
	ll x=a.length(),y=b.length();
	if(x<y)
	{
		reverse(a.begin(),a.end());
		cout<<a<<endl;
	}
	else
	{
		string ans="";
		for(ll i=0;i<x;i++)
		{
			if(find(a,b[i],x)!=-1)
			ans=ans+b[i];
			else
			{
				ll y=find_max(a,b[i],x);
				if(y!=-1)
				ans=ans+a[y];
				else
				{
					ll xy=find_max(a,b[i-1],x);
					ans=ans+ans[ans.length()-1];
					ans[ans.length()-2]=a[xy];
				}
				break;
			}
		}
		ans=s_sort(a,ans,x);
		cout<<ans;
	}
}
