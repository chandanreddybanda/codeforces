#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<ll> > g;
ll c[100009],d[100009];

void dfs(ll id){
	for(int i=0;i<g[id].size();i++){
		d[id] += c[g[id][i]];
		dfs(g[id][i]);
	}
}

int main(){
	ll n;
	cin>>n;
	g.resize(n+1);ll r;
	for(int i=1;i<=n;i++){
		ll x,y;
		cin>>x>>y;c[i]=1-y;d[i] = c[i];
		if(x==-1)r=i;
		if(x!=-1)
		g[x].push_back(i);
	}
	dfs(r);
	vector<ll> an;
	for(int i=1;i<=n;i++){
		if(d[i]==0){
			an.push_back(i);
		}
	}
	sort(an.begin(),an.end());
	for(int i=0;i<an.size();i++){
		cout<<an[i]<<" ";
	}
	if(an.size()==0)cout<<"-1"<<endl;
}
