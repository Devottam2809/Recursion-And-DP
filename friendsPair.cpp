#include<bits/stdc++.h>
using namespace std;

int recursive(int n){
    if(n<=2)
        return n;
return recursive(n-1)+(n-1)*recursive(n-2);
}

int topDown(int n,vector<int>dp){
    if(n<=2)
        return n;
    if(dp[n]!=-1)
        return dp[n];
return dp[n]=topDown(n-1,dp)+(n-1)*topDown(n-2,dp);
}

int bottomUp(int n){
    vector<int>dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++)
        dp[i]=dp[i-1]+(i-1)*dp[i-2];
return dp[n];
}

int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<"Recursive : "<<recursive(n)<<endl;
    cout<<"top Down : "<<topDown(n,dp)<<endl;
    cout<<"bottom Up : "<<bottomUp(n)<<endl;

    return 0;
}
