#include <iostream>

using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;

  node(int x) {
    data = x;
    left = NULL;
    right = NULL;
  }
};

class BinaryTree {
private:
  struct node *root;
public:
  BinaryTree() {
    root = NULL;
  }
/*-----------------------------------------------------*/
  void insert(int x) {
    if (root == NULL) {
      root = new node(x);
      return;
    }

    struct node *current = root;
    while (true) {
      if (x < current->data) {
        if (current->left == NULL) {
          current->left = new node(x);
          return;
        }
        current = current->left;
      } else {
        if (current->right == NULL) {
          current->right = new node(x);
          return;
        }
        current = current->right;
      }
    }
  }
/*-----------------------------------------------------*/
  struct node* getRoot() {
    return root;
  }
/*-----------------------------------------------------*/
  void getLeftMostNode(node* root) {
    node* current = root;
    if (current == NULL) {
      cout << "BT empty" << endl;
      return;
    }

    while (current->left != NULL) {
      current = current->left;
    }
    cout << "leftmost node" << current->data << endl;
  }
/*-----------------------------------------------------*/

};

int main() {
  BinaryTree tree;
  tree.insert(4);
  tree.insert(2);
  tree.insert(1);
  tree.insert(3);
  tree.insert(6);
  tree.insert(5);
  tree.insert(7);

  node *root = tree.getRoot();
  tree.getLeftMostNode(root);

  return 0;
}
