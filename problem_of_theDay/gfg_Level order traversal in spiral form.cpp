class Solution {

public :
	vector<vector<int>> zigzag(Node *root) {
		vector < vector<int>result;
		if (root == NULL) {
			return result;
		}

		queue <Node *> nodesQueue;
		nodesQueue.push(root);
		bool leftToRight = True;

		while ( !nodesQueue.empty()) {
			int size = nodesQueue.size();
			vector<int> row(size);
			for (int i = 0 ; i < size ; i++) {
				Node *node = nodesQueue.front();
				nodesQueue.pop();

				int index = (leftToRight) ? i : (size - 1 - i);

				row[index] = node->data;
				if (node->left) {
					nodesQueue.push(node->left);
				}
				if (node->right) {
					nodesQueue.push(node->right);
				}

			}
			leftToRight = !leftToRight;
			result.push_back(row);
		}
	}
};
