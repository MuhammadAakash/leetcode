class Solution {
public:
    queue<pair<int, int>> Q;

    pair<int, int> find_ini_grid(int n, vector<vector<int>>& grid){      
        for (int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if (grid[i][j]==1){
                  return {i, j};  
            }
        return {-1,-1};
    }
    void print(int n, vector<vector<int>>& grid){
        for (int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout<<setw(3)<<grid[i][j];
            cout<<endl;
        }
    }

    void find_A(int x, int y, vector<vector<int>>& grid, int n){
        if (x<0 || x>=n || y<0 || y>=n) return;
        if (grid[x][y]==1) {
            grid[x][y]=2;
            Q.push({x, y});
            find_A(x+1, y, grid, n);
            find_A(x, y+1, grid, n);
            find_A(x-1, y, grid, n);
            find_A(x, y-1, grid, n);
        }        
    }

    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        pair<int, int> P=find_ini_grid(n, grid);
        find_A(P.first, P.second,  grid, n);
        int d;
        for (d=0; ; d++){
            queue<pair<int, int>> Q2;
            while(!Q.empty()){              
                pair<int, int> P=Q.front();
                Q.pop();
                int x=P.first, y=P.second;
                vector<pair<int,int>> adj({{x+1,y},{x, y+1},{x-1, y},{x, y-1}});
                for(auto& [x2, y2]: adj)
                {
                    if (x2<0 || x2>=n || y2<0 || y2>=n) continue;
                    if (grid[x2][y2]==1) {
                  //    print(n, grid);//print the graph w dist.info
                        return d;
                    }
                    else if (grid[x2][y2]==0) {
                        Q2.push({x2,y2});
                        grid[x2][y2]=-1-d;//distance d to island A
                    }
                }    
            }          
            Q=Q2;
        }
        return d;       
    }
};