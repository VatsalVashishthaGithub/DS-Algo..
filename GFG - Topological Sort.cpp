class Solution {
  public:
    stack<int> st;
    void dfs(int val, vector<vector<int>>& adj, vector<int>& vis){
        vis[val] = 1;
        for(auto x : adj[val]){
            if(!vis[x]){
                dfs(x,adj,vis);
            }
        }
        st.push(val);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        // making the adjacency list from the given edges..
        vector<vector<int>> adj(V);
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }
        // ----------------------
        vector<int> vis(V,0);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i,adj,vis);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
