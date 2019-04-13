#include <bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    t=1;
    while(t--){
       int n,k;
       cin>>n;
       k=3;
       int arr[n],b[n];
       for(int i=0;i<n;++i){
        cin>>arr[i];

       }
		for(int i=0;i<n;++i){
        cin>>b[i];
        //b[i]=-b[i];

       }
       int dp[n][k+1];

       for(int i=0;i<n;++i){
        for(int j=0;j<=k;++j){
            dp[i][j]=INT_MAX;
            if(j==1)dp[i][j]=b[i];

        }

       }

       for(int i=1;i<n;++i){
        for(int j=0;j<i;++j){
            for(int l=1;l<=k;++l){
                if((dp[j][l]!=INT_MAX)    &&      (arr[i]>arr[j])){

                    dp[i][l+1] = min(dp[i][l+1],dp[j][l]+b[i]);

                }

            }



        }



       }

       int ans = INT_MAX;

       for(int i=0;i<n;++i){

        ans = min(ans,dp[i][k]);

       }
       if(ans!=INT_MAX)
            cout<<ans<<endl;
    else
            cout<<"-1"<<endl;
    
    }



    return 0;
}

