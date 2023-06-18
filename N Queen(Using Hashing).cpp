// N queen    Leetcode 51     @devottam2809

class Solution {
public:
    void solve(int col,vector<string> &board,vector<vector<string>> &ans,vector<int> &leftrow,vector<int> &uppDiag,vector<int> &lowDiag,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
        if(leftrow[row]==0 && lowDiag[row+col]==0 && uppDiag[n-1+col-row]==0){
            board[row][col]='Q';
            leftrow[row]=1;
            lowDiag[row+col]=1;
            uppDiag[n-1+col-row]=1;
            solve(col+1,board,ans,leftrow,uppDiag,lowDiag,n);
            board[row][col]='.';
            leftrow[row]=0;
            lowDiag[row+col]=0;
            uppDiag[n-1+col-row]=0;
            }
        }
}
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);

        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;

        vector<int>leftrow(n,0),uppDiag(2*n-1,0),lowDiag(2*n-1,0);
        solve(0,board,ans,leftrow,uppDiag,lowDiag,n);
        return ans;
    }
};
