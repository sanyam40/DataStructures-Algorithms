#include <iostream>
#include <vector>
using namespace std;

// function to check all conditions
// --> 1) path closed || 2) out of bound
// 3) check is pos is already visited
bool isSafe(int maze[][4],int row,int col,int srcx,int srcy,int newx,int newy,vector<vector<bool>>&visited){
    if(maze[newx][newy]==1 && (newx>=0 && newx<row) && (newy>=0 && newy<col) && visited[newx][newy]==false){
        return true;
    }
    else return false;
}

void solve(int maze[][4],int row,int col,int srcx,int srcy,string &ans,vector<vector<bool>>&visited){
    // BASE CASE
    // destination cor: [row-1][col-1]
    if(srcx==row-1 && srcy==col-1){
        cout<<ans<<endl;
        return;
    }

    // 1 Case solved for all direction -> UP,DOWN,LEFT,RIGHT
    // UP 
    int newx=srcx-1;
    int newy=srcy;
    if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)){
        // mark visited
        visited[newx][newy]=true;
        // recursion
        ans.push_back('U');
        solve(maze,row,col,newx,newy,ans,visited);
        // backtracking
        ans.pop_back();
        visited[newx][newy]=false;
    }
    // RIGHT
    newx=srcx;
    newy=srcy+1;
    if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)){
        // mark visited
        visited[newx][newy]=true;
        // recursion
        ans.push_back('R');
        solve(maze,row,col,newx,newy,ans,visited);
        // backtracking
        ans.pop_back();
        visited[newx][newy]=false;
    }
    // LEFT 
    newx=srcx;
    newy=srcy-1;
    if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)){
        // mark visited
        visited[newx][newy]=true;
        // recursion
        ans.push_back('L');
        solve(maze,row,col,newx,newy,ans,visited);
        // backtracking
        ans.pop_back();
        visited[newx][newy]=false;
    }
    // DOWN
    newx=srcx+1;
    newy=srcy;
    if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)){
        // mark visited
        visited[newx][newy]=true;
        // recursion
        ans.push_back('D');
        solve(maze,row,col,newx,newy,ans,visited);
        // backtracking
        ans.pop_back();
        visited[newx][newy]=false;
    }
}

int main(){
    int maze[4][4]={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };
    int row=4;
    int col=4;

    int srcx=0;
    int srcy=0;
    string ans="";

    vector<vector<bool>> visited(row,vector<bool>(col,false));
    if(maze[0][0]==0) cout<<'INVALID';
    else{
        visited[srcx][srcy]=true;
        solve(maze,row,col,srcx,srcy,ans,visited);
    }
    cout << ans;
}