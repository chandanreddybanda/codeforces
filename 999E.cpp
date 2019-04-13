#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<int> adj[100001];
#define pb push_back
vector<int> visi(100001,0);
void dfs(int curr)
{
	if(!visi[curr])
	{
		visi[curr]=1;
		for(int i=0;i<adj[curr].size();i++)
		{
			dfs(adj[curr][i]);
		}
	}
}
int main()
{
	int n,m,s,cnt=0,ans=INT_MAX;
	cin>>n>>m>>s;
	int u[m],v[m];
	for(int i=0;i<m;i++)
	{
		cin>>u[i]>>v[i];
		adj[u[i]].pb(v[i]);
	}
	dfs(s);
	int count=0;
	vector<int> l;
	for(int i=1;i<=n;i++)
	{
		if(!visi[i])
		{
			l.push_back(i);
		}
	}
	for(int i=0;i<l.size();i++){
		dfs(l[i]);cnt=0;
		for(int j=1;j<=n;j++){
			if(!visi[j])
			dfs(j);
		}
		for(int j=1;j<=n;j++)
		if(!visi[j])
		cnt++;
		for(int j=0;j<l.size();j++)
		visi[l[j]]=0;
		if(cnt)
		ans=min(cnt,ans);
	}
	if(ans==INT_MAX)
	cout<<l.size()<<endl;
	else
	cout<<ans<<endl;
	return 0;
}
