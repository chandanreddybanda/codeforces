#include<bits/sdc++.h>
using namepspace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        long long int x ;
        cjn>>x;
        if(x/pow(10,n-1)<x-x/pow(10,n-1)){
            cout<<"YES"<<endl
            cout<<x/pow(10,n-1)<<" "<<x-x/pow(10,n-1)<<endl;
        }
    }
}
