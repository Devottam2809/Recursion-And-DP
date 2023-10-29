#include <bits/stdc++.h>
using namespace std;
int recursive(int n){
    if(n<=1)
        return n;
return recursive(n-1)+recursive(n-2);
}

int topDown(int n,vector<int>dp){
    if(n<=1)
        return n;
    if(dp[n]!=-1)
        return dp[n];

return dp[n]=topDown(n-1,dp)+topDown(n-2,dp);
}

int bottomUp(int n,vector<int> &dp){
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++)
        dp[i]=dp[i-2]+dp[i-1];
return dp[n];
}

int spaceOp(int n){
    if(n<=1)
        return n;
    int a=0;
    int b=1;
    int c=a+b;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
return c;
}


int main(){
    int n;
    cin>>n;

    vector<int>dp(n+1,-1);
    cout<<"Resursive : "<<recursive(n)<<endl;
    cout<<"Memoization : "<<topDown(n,dp)<<endl;
    cout<<"Tabulation : "<<bottomUp(n,dp)<<endl;
    cout<<"Space Optimization : "<<spaceOp(n)<<endl;
    return 0;
}
