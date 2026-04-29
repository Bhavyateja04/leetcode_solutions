class Solution {
    int dfs(int node, vector<vector<int>>&adj, vector<int>&visited, vector<int>&ans, vector<int>&quiet){
        if(visited[node]){
            return ans[node]; 
        }

        visited[node]=1;
        ans[node]=node;
        int minqp=-1;
        for(auto it:adj[node]){
            int newqperson=dfs(it,adj, visited, ans, quiet);
            if(minqp==-1){
                minqp=newqperson;
            }
            else if(quiet[minqp] > quiet[newqperson]){
                minqp=newqperson;
            }
        }
        if(minqp==-1) minqp=node;
        if(quiet[ans[node]] > quiet[minqp]){
            ans[node]=minqp;
        }
        return ans[node];
    }

public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        vector<vector<int>>adj(n);

        for (auto &it : richer) {
            adj[it[1]].push_back(it[0]); 
        }
        
        vector<int>visited(n);
        vector<int>ans(n);

        for(int i=0;i<n;i++){
            if(!visited[i]){
                ans[i]=dfs(i,adj, visited, ans,quiet);
            }
        }
        return ans;
    }
};