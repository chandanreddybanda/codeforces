#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double 
#define pb push_back
#define mk make_pair
ll fact(ll n){
	if(n==0||n==1)
	return 1;
	return n*fact(n-1);
}
ll a[10];
int main(){
	ll n;
	cin>>n;
	while(n>0){
		a[n%10]++;
		n/=10;
	}
	ll sum=0;
	for(int i=0;i<10;i++)
	sum+=a[i];
	if(a[0]==0){
		ll x=fact(sum);
		for(int i=1;i<10;i++){
			if(a[i]){
				x=x/fact(a[i]);
			}
		}
		cout<<x<<endl;
	}
	else{
		ll t=fact(sum);
		for(int i=0;i<10;i++){
			if(a[i]){
				t=t/fact(a[i]);
			}
		}
		cout<<t<<endl;
		while(a[0]){
			a[0]--;
			sum--;
			ll x=fact(sum);
			for(int i=0;i<10;i++){
				if(a[i]){
					x=x/fact(a[i]);
				}
			}
			t+=x*(-1);
		}
		cout<<t<<endl;
	}
}
