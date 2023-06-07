// Leetcode 39    Combination Sum   @devottam2809

class Solution {
private:
    void recCall(int idx,int target,vector<int>& arr, vector<vector<int>>& ans,vector<int>& temp){
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(temp);
            }
        return ;
        }
    if(arr[idx]<=target){
        temp.push_back(arr[idx]);
    recCall(idx,target-arr[idx],arr,ans,temp);
    temp.pop_back();
    }
    recCall(idx+1,target,arr,ans,temp);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        recCall(0,target,candidates,ans,temp);
    return ans;
    }
};
