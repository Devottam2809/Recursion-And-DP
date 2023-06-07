// Subset Sum GFG       @devottam2809

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
private:
    void rec_call(int idx,int sum,vector<int>&arr,int n,vector<int>&ans){
        if(idx==n){
            ans.push_back(sum);
        return ;
        }
        rec_call(idx+1,sum+arr[idx],arr,n,ans);
        rec_call(idx+1,sum,arr,n,ans);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        rec_call(0,0,arr,N,ans);
        sort(ans.begin(),ans.end());
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
