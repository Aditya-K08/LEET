class Solution {
public:
    void solveRec(int col,int n,vector<vector<string>> &board,vector<vector<string>>& ans){
       if (col == n) {
        vector<string> v;
        for (int i = 0; i < n; i++) {
            string s = "";
            for (int j = 0; j < n; j++) {
                s += board[i][j];
            }
            v.push_back(s);
        }
        ans.push_back(v);
        return;
    }
        for(int i=0;i<n;i++){
            if(isSafe(board,i,col,n)){
                board[i][col]='Q';
                solveRec(col+1,n,board,ans);
                board[i][col]='.';
            }
        }
    }
    bool isSafe(vector<vector<string>>&board,int row,int col,int n){
        for(int i=0;i<col;i++)
            if(board[row][i]=="Q"s) return false;
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]=="Q"s) 
            return false; 
        for (int i = row, j = col; j >= 0 && i < n; i++, j--) 
        if (board[i][j]=="Q"s) 
            return false; 
        return true; 
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>board(n,vector<string>(n,"."));
        vector<vector<string>>ans;
        solveRec(0,n,board,ans);
        return ans;
    }
};