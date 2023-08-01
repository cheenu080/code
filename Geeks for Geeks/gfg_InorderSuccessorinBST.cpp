class Solution {
public:
	void inOrder(Node *root, vector<int> &v) {
		if (root == NULL) return;
		inOrder(root->left, v);
		v.push_back(root->data);
		inOrder(root->right, v);
	}

	Node *inOrderSuccessor(Node *root, Node *x) {
		vector<int> v;
		inOrder(root, v);
		int sz = v.size();

		for (int i = 0; i < sz - 1; i++) {
			if (v[i] == x) return v[i + 1];
		}

		return -1;
	};
