#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map <string,int> m;
int main()
{
	ll n;
	cin>>n;
	string s[n];
	for(ll i=0;i<n;i++)
	{
		cin>>s[i];
		if(!m[s[i]])
		cout<<"OK"<<endl;
		else
		cout<<s[i]<<m[s[i]]<<endl;
		m[s[i]]++;
	}
}
