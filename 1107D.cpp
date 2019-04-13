#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

char get(int i){
	if(i<10)
	return char(i+'0');
	else
	return char('A'+i-10);
}

map<char,string> m;
map<string,char> n;
void doit(){
	for(int i=0;i<16;i++){
		ll x = i;
		string z="";
		for(int j=0;j<4;j++){
			if(x%2 == 0)z+='0';
			else z+='1';
			x/=2;
		}
		m[get(i)] = z;
		n[z] = get(i);
	}
}

string nice(char i, char j, char k, char l){
	string s="";
	for(int h=0;h<4;h++){
		string z="";
		z += m[i][h]+m[j][h]+m[k][h]+m[l][h];
		s += n[z]; 
	}
	return s;
}

map<string,string> r;

void find(){
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			for(int k=0;k<16;k++){
				for(int l=0;l<16;l++){
					string x="";
					x += get(i) + get(j) + get(k) + get(l);
					r[x] = nice(get(i) , get(j) , get(k) , get(l));
				}
			}
		}
	}
}


int main(){
	doit();
	find();
	ll n;
	cin>>n;
	string s[n];
	
	for(int i=0;i<n;i++)cin>>s[i];
	
	ll x = 0,a = INT_MAX;
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1]){
			x++;
		}
		else{
			a = min(a,x+1);
			x = 0;
		}
	}
	a = min(a,x+1);
	
	string q[n];
	
	for(int j=0;j<n/4;j++){
		for(int i=0;i<n;i++){
			
		}
	}
	
}
