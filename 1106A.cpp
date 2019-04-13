#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back
vector<vector<ll> > v;
ll t[100009];
void dfs(ll n){
	set<ll> q;
	q.insert(1);
	vector<ll> z;
	while(!q.empty()){
		ll x = *q.begin();q.erase(*q.begin());cout<<x<<" ";z.pb(x);t[x] = 1;
		for(int i=0;i<v[x].size();i++){
			if(!t[v[x][i]]){
				q.insert(v[x][i]);
			}
		}
	}
	/*ll s = z.size();
	if(z[s-2]==z[s-1])
	for(int i=0;i<z.size()-1;i++)cout<<z[i]<<" ";
	else
	for(int i=0;i<z.size();i++)cout<<z[i]<<" ";*/
}

int main(){
	ll n,m;
	cin>>n>>m;
	v.resize(n+1);
	for(int i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	dfs(n);
}
