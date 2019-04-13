#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
vector<ll> g[50];
ll v[50];
vector<ll> ans;
void dfs(ll x){
	ans.pb(x);
	for(int i=0;i<g[x].size();i++){
		ll cur=g[x][i];
		if(v[cur]==0){
			v[cur]=1;
			dfs(cur);
		}
	}
}
int main(){
	ll n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	vector<ll> cnt[n+1];ll tc=0;ll a[4]={0};
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			v[i]=1;
			tc++;
			dfs(i);
			cnt[i]=ans;
		//	cout<<cnt[i].size()<<endl;
		//	a[cnt[i].size()]++;
			ans.clear();
			if(cnt[i].size()>3){cout<<"-1"<<endl;return 0;}
			a[cnt[i].size()]++;
		}
	}
	if(a[1]<a[2]||(a[1]-a[2])%3!=0){
		cout<<"-1"<<endl;return 0;
	}
	for(int i=1;i<=n;i++){
		if(cnt[i].size()==3){cout<<cnt[i][0]<<" "<<cnt[i][1]<<" "<<cnt[i][2]<<endl;cnt[i].clear();}
	}
	for(int i=1;i<=n;i++){
		if(cnt[i].size()==2){cout<<cnt[i][0]<<" "<<cnt[i][1]<<" ";cnt[i].clear();for(int j=1;j<=n;j++){if(cnt[j].size()==1){cout<<cnt[j][0]<<endl;cnt[j].clear();break;}}}
	}
	for(int i=1;i<=n;i++){
		if(cnt[i].size()==1){cout<<cnt[i][0]<<" ";cnt[i].clear();for(int j=1;j<=n;j++){if(cnt[j].size()==1){cout<<cnt[j][0]<<" ";cnt[j].clear();for(int k=1;k<=n;k++){if(cnt[k].size()==1){cout<<cnt[k][0]<<endl;cnt[k].clear();j=n+10;break;}}}}}
	}
}

