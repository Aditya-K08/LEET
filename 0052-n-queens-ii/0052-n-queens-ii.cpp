class Solution {
public:
     int solveRec(int col,int n,vector<vector<string>> &board,int &ans){
       if (col == n) {
        vector<string> v;
        for (int i = 0; i < n; i++) {
            string s = "";
            for (int j = 0; j < n; j++) {
                s += board[i][j];
            }
           //ans++;
        }
        ans++;
        //return;
    }
        for(int i=0;i<n;i++){
            if(isSafe(board,i,col,n)){
                board[i][col]='Q';
                solveRec(col+1,n,board,ans);
                board[i][col]='.';
            }
        }
        return ans;
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
    int totalNQueens(int n) {
        vector<vector<string>>board(n,vector<string>(n,"."));
        int ans=0;
        ans=solveRec(0,n,board,ans);
        return ans;
    }
};