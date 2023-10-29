#include <bits/stdc++.h>
using namespace std;

int binCo(int n,int k){
    if(k==n or k==0)
        return 1;
    if(k>n)
        return 0;
return binCo(n-1,k-1)+binCo(n-1,k);
}

int topDown(int n,int k,vector<vector<int>>dp){
    if(k==n or k==0)
        return 1;
    if(k>n)
        return 0;
    if(dp[n][k]!=-1)
        return dp[n][k];
return dp[n][k]=topDown(n-1,k-1,dp)+topDown(n-1,k,dp);
}

int bottomUp(int n,int k,vector<vector<int>> &dp){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(n,k);j++){
            if(j==0 or i==j)
                dp[i][j]=1;
            else    
                dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
        }
    }
return dp[n][k];
}
int spaceOp(int n,int k){
    vector<int>dp(k+1);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=min(i,k);j>=1;j--){
            dp[j]=dp[j-1]+dp[j];
        }
    }
return dp[k];
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    cout<<"Recursive : "<<binCo(n,k)<<endl;
    cout<<"Memoization : "<<topDown(n,k,dp)<<endl;
    cout<<"Tabulation : "<<topDown(n,k,dp)<<endl;
    cout<<"Space Optimization : "<<spaceOp(n,k)<<endl;
    return 0;
}
