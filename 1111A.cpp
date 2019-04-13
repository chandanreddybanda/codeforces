#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define pb push_back
#define MA 1073741827

map<ll,ll> m;

int main(){
	ll n,k,a,b;
	cin>>n>>k>>a>>b;
	ll p[k];
	for(int i=0;i<k;i++){
		cin>>p[i];
		m[p[i]]++;
	}
	map<ll,ll> :: iterator i,j;
	vector<ll> v;
	for(i = m.begin();i!=m.end();i++){
		j = i;
		j++;
		if(j!=m.end()){
			j->second += i->second;
		}
		cout<<i->first<<" "<<i->second<<endl;
	}
}
