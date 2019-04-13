#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
vector<ll> st;
priority_queue<ll> g[200005];
pair<ll,ll> gur[200005];
void dfs(ll x){
	st.pb(x);
	gur[x].first=st.size()-1;
	while(!g[x].empty()){
		dfs(-g[x].top());
		g[x].pop();
	}
	gur[x].second=st.size()-gur[x].first;
}
int main() {
	ll n,q;
	cin>>n>>q;
	for(int i=2;i<=n;i++){
		int x;
		cin>>x;
		g[x].push(-i);
	}
	dfs(1);
//	cout<<st<<endl;
	for(int i=0;i<q;i++){
		ll x,y;
		cin>>x>>y;
		if(gur[x].second<y){cout<<"-1"<<endl;continue;}
		cout<<st[gur[x].first+y-1]<<endl;
	}
}
