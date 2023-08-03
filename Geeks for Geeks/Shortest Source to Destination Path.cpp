# define ll long long
# define help for(auto it:v)cout<<it<<" "
//use M_PI for value of pi
class Solution {
public:
	int shortestDistance(int N, int M, vector<vector<int>>& A, int X, int Y) {
		//code here - using BFS
		if (A[0][0] == 0 || A[X][Y] == 0) return -1;

		vector<vector<int>> vis(N, vector<int>(M, 0));

		queue<pair<pair<int, int>, int>> q;
		q.push({{0, 0}, 0});
		vis[0][0] = 1;

		int drow[] = { -1, 0, 1, 0};
		int dcol[] = {0, 1, 0, -1};

		while (!q.empty()) {
			int row = q.front().first.first;
			int col = q.front().first.second;
			int steps = q.front().second;
			q.pop();

			if (row == X && col == Y) return steps;

			for (int i = 0; i < 4; i++) {
				int nrow = row + drow[i];
				int ncol = col + dcol[i];
				if (nrow >= 0 && nrow < N && ncol >= 0 && ncol < M && A[nrow][ncol] == 1 && vis[nrow][ncol] == 0) {
					q.push({{nrow, ncol}, steps + 1});
					vis[nrow][ncol] = 1;
				}
			}
		}
		return -1;
	}
};


//driver code is present by default
