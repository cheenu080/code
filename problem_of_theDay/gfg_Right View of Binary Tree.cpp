class Solution {
public:
	vector<int> rightView(Node *root) {
		vector<int> ds;
		recursion(root, 0, ds);
		return ds;
	}

private:
	void recursion(Node *root, int level, vector<int>& ds) {
		if (root == nullptr) return;
		if (ds.size() == level) {
			ds.push_back(root->val);
		}
		recursion(root->right, level + 1, ds);
		recursion(root->left, level + 1, ds);
	}
};
