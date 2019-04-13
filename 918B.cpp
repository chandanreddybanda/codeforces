#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	map<string,string> ma;
	ll n,m;
	cin>>n>>m;
	string s1,s2;
	for(ll i=0;i<n;i++)
	{
		cin>>s1>>s2;
		ma.insert(pair<string,string> (s2+";",s1));
	}
	for(ll i=0;i<m;i++)
	{
		cin>>s1>>s2;
		cout<<s1<<" "<<s2;
		cout<<" #"<<ma[s2];
		cout<<endl;
	}
}
