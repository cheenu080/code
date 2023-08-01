#define ll long long
#define ull unsigned long long
#define help for(auto it:v) cout<<it<<" "

class Solution {

private:
	void dfs(int node, vector<int> adj[], int vis[], vector<int>& ls) {
		vis[node] = 1;
		ls.push_back(node);

		for (auto it : adj[node]) {
			if (!vis[it]) {
				dfs(it, adj, vis, ls);
			}
		}
	}

public:
	vector<int> dfsOfGraph(int V, vector<int> adj[]) {
		int vis[V] = {0};
		int start = 0;
		vector<int> ls;
		dfs(start, adj, vis, ls);
		return ls;
	}

};


//driver code is present by default
