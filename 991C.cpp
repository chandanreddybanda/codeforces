		/*lol*/
		#include<bits/stdc++.h>
		using namespace std;
		#define ll long long int
		#define ld long double 
		#define pb push_back
		#define mk make_pair
		int main(){
			ll n,ans=0;
			cin>>n;
			ll l=1,r=n/10;
			while(l<r){
				ll mid=l+(r-l)/2;
				ll x=n;ll ans=0;
				while(x>0){
					if(x<mid){
						ans+=x;
						x=0;
					}
					else{
						ans+=mid;
						x-=mid;
					}
					x-=(x/10);
				}
				if(2*ans<n){
					l=mid+1;
				}
				else if(2*ans>=n){
					r=mid;
				}
			}
			cout<<l<<endl;
		}
