#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int maze[2][2], int row, int col, int i, int j, vector<vector<bool>> &visited){
    if((i>=0 && i<row)&&(j>=0 && j<col)&&(maze[i][j]==1)&&(visited[i][j]==false)){
        return true; 
    }
    else{
        return false;
    }
}

void solvemaze(int maze[2][2], int row, int col, int i, int j, vector<vector<bool>> &visited,
vector<string> &path, string output){
    if(i==row-1 && j==col-1){
        path.push_back(output);
        return; 
    }

    if(isSafe(maze,row,col,i+1,j,visited)){
        visited[i+1][j]=true;
        solvemaze(maze,row,col,i+1,j,visited,path,output+'D');
        visited[i+1][j]=false;
    }

    if(isSafe(maze,row,col,i-1,j,visited)){
        visited[i-1][j]=true;
        solvemaze(maze,row,col,i-1,j,visited,path,output+'U');
        visited[i-1][j]=false;
    }

    if(isSafe(maze,row,col,i,j-1,visited)){
        visited[i][j-1]=true;
        solvemaze(maze,row,col,i,j-1,visited,path,output+'L');
        visited[i][j-1]=false;
    }

    if(isSafe(maze,row,col,i,j+1,visited)){
        visited[i][j+1]=true;
        solvemaze(maze,row,col,i,j+1,visited,path,output+'R');
        visited[i][j+1]=false;
    }
}

    int main()
{
    int maze[2][2] = {{1,1},{1,1}};
    int row = 2;
    int col = 2;

    vector<vector<bool>> visited(row, vector<bool>(col,false));
    visited[0][0] = true;
    vector<string> path;
    string output = "";

    cout<<"the resultant path is "<<endl; 
    solvemaze(maze, row, col, 0, 0, visited, path, output);

    for(auto i : path){
        cout<< i<<" ";
    }
    cout<<endl; 
    return 0; 
}