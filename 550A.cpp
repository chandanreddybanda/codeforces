#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	string s;
	cin>>s;
	ll n=s.length(),f=1,d=1;
	for(ll i=0;i<n-1;i++)
	{
		if(s[i]=='A'&&s[i+1]=='B'&&f)
		f=0,i+=2;
		if(s[i]=='B'&&s[i+1]=='A'&&!f)
		{
			cout<<"YES"<<endl;f=10;
			return 0;
			break;
		}
	}
	for(ll i=0;i<n-1;i++)
	{
		if(s[i]=='B'&&s[i+1]=='A'&&d)
		d=0;i+=2;
		if(s[i]=='A'&&s[i+1]=='B'&&!d)
		{
			cout<<"YES"<<endl;d=10;
			return 0;
			break;
		}
	}
	if(f!=10&&d!=10)
	cout<<"NO"<<endl;
}
