# define ll long long
# define help for(auto it:v)cout<<it<<" "
//use M_PI for value of pi

class Solution {

public: vector<int> bfsOfGraph(int V, vector<int> adj[]) {
		//code here
		int vis[V] = {0};
		vis[0] = 1;

		queue <int> q;
		q.push(0);
		vector<int> bfs ;

		while (!q.empty()) {
			int node = q.front();
			q.pop();
			bfs.push_back(node);


			for (auto it : adj[node]) {
				if (!vis[it]) {
					vis[it] = 1;
					q.push(it);
				}
			}
		}
		return bfs;
	}

};

//driver code is present by default
