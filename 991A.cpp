/*lol*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double 
#define pb push_back
#define mk make_pair
int b[6];
int main(){
	ll n,sum=0;
	cin>>n;
	ld a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];sum+=a[i];b[(int)a[i]]++;}
	ld t=sum/n;
	if(sum>=4.5*n)
	{cout<<"0"<<endl;return 0;}
	t=(ceil)(4.5*n-sum);
	int i=2;
	sort(a,a+n);int ans=0;
	for(int i=0;i<n;i++){
		if(t>0){
			if(t<=5-a[i]){
				ans++;
				cout<<ans<<endl;
				return 0;
				break;
			}
			else{
				t=t-(5-a[i]);
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}
