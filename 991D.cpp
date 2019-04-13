/*lol*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double 
#define pb push_back
#define mk make_pair
int b[6];
int main(){
	string a,b;int ans=0;
	cin>>a;
	cin>>b;
	int n=a.length();
	for(int i=0;i<n-1;i++){
		if(a[i]=='0'&&b[i]=='0'){
			if(a[i+1]=='0')
			{
				a[i]='1';
				b[i]='1';
				a[i+1]='1';
				ans++;
			}
			else if(b[i+1]=='0')
			{
				a[i]='2';
				b[i]='2';
				b[i+1]='2';
				ans++;
			}
		}
		else if(a[i]=='0'){
			if(a[i+1]=='0'&&b[i+1]=='0'){
				a[i]='3';
				a[i+1]='3';
				b[i+1]='3';
				ans++;
			}
		}
		else if(b[i]=='0'){
			if(a[i+1]=='0'&&b[i+1]=='0'){
				b[i]='4';
				a[i+1]='4';
				b[i+1]='4';
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}
