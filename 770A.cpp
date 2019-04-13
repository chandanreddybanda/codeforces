#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin>>n>>m;
	string s="";
	for(ll i=0;i<n;i++)
	s=s+char(((i)%m)+'a');
	cout<<s;
}
