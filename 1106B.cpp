#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back

int main(){
	ll n,m;
	cin>>n>>m;
	ll a[n+1],c[n+1];
	
	vector<pair<ll,ll> > q;
	
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		cin>>c[i];
		q.push_back(make_pair(c[i],i));
	}

	
	sort(q.begin(),q.end());
	
	ll ans=0;
	ll z = 0;
	
	for(int i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		if(a[x]>=y){
			ans += c[x]*y;
			a[x] -= y;
		}
		else{
			ll ans2 = 0;
			ans2 += a[x]*c[x];y -= a[x];a[x] = 0;
			while(y){
				if(z>=n){
					ans2 = 0;
					break;
				}
				pair<int,int> s = q[z];//cout<<s.first<<" "<<s.second<<endl;
				if(a[s.second]>=y){
					ans2 += c[s.second]*y;
					if(a[s.second]>y){
						a[s.second] -= y;y = 0;
					}
					else{
						a[s.second] -= y;y = 0;
						z++;
					}
				}
				else{
					ans2 += a[s.second]*c[s.second];
					y -= a[s.second];a[s.second] = 0;
					z++;
				}
			}
			ans += ans2;
		}
		cout<<ans<<endl;
		ans =0;
	}
	

	
}
