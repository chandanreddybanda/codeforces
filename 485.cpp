#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	double a,b;
	cin>>a>>b;
	if(a==b){
		cout<<"="<<endl;
		return 0;
	}
	else if(b*log(a)>a*log(b)){
		cout<<">"<<endl;
		return 0;
	}
	else if(b*log(a)<a*log(b))
	cout<<"<"<<endl;
	else cout<<"="<<endl;
}
