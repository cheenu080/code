void inOrderTraversal(Node* root, vector<int>& v) {
	if (root == NULL) return;
	inOrderTraversal(root->left, v);
	v.push_back(root->data);
	inOrderTraversal(root->right, v);
}

float findMedian(Node *root) {
	vector<int> v;
	inOrderTraversal(root, v);

	int sz = v.size();
	if (sz % 2 == 0) {
		return static_cast<float>(v[sz / 2] + v[(sz / 2) - 1]) / 2.0;
	} else {
		return static_cast<float>(v[(sz - 1) / 2]);
	}
}
