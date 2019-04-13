#include<bits/stdc++.h>
using namespace std;
#define ll long int
#define ld long double
ll gcd(ll a,ll b){
	if(a==0)
	return b;
	return gcd(b%a,a);
}
bool my(pair<ll,ll> a,pair<ll,ll> b){
	return a.second<b.second;
}

int main(){
	ll n,m,ans=0;
	cin>>n>>m;
	vector<stack<pair<ll,ll> > >dp;
	dp.resize(m);
	ll a[n];ll ma=-1,mi=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		dp[a[i]%m].push(make_pair(a[i],i+1));
		if(ma<=dp[a[i]%m].size())
		mi=a[i]%m,ma=dp[a[i]%m].size();
		
	}
	for(int i=mi+1;i<m;i++){
		while(dp[i-1].size()>n/m){
			pair<ll,ll> x=dp[i-1].top();
			dp[i-1].pop();
			x.first++;
			dp[i].push(x);
			ans++;
		}
	}
	for(int i=0;i<mi;i++){
		if(i==0){
			while(dp[m-1].size()>n/m){
				pair<ll,ll> x=dp[m-1].top();
				dp[m-1].pop();
				x.first++;
				dp[i].push(x);
				ans++;
			}
		}
		else{
			while(dp[i-1].size()>n/m){
				pair<ll,ll> x=dp[i-1].top();
				dp[i-1].pop();
				x.first++;
				dp[i].push(x);
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	vector<pair<ll,ll> > l;
	for(int i=0;i<m;i++){
		while(!dp[i].empty()){
			l.push_back(dp[i].top());
			dp[i].pop();
		}
	}
	sort(l.begin(),l.end(),my);
	for(int i=0;i<n;i++)
	cout<<l[i].first<<" ";
}
