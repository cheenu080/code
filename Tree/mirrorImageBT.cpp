#include<iostream>
using namespace std;

struct node {
  struct node *lc;
  int data;
  struct node *rc;

  node(int x) {
    data = x;
    lc = NULL;
    rc = NULL;
  }
};

class BinaryTree{
private:
  struct node *root;

public:
  BinaryTree(){
    root = NULL;
  }
/*-----------------------------------------------------*/
  void insert(int x){
    if(root==NULL){
      root = new node(x);
      return;
    }
    struct node *r =root;
    while(true){
      if(x < r->data){
        if(r->lc == NULL){
          r->lc = new node(x);
          return;
        }
        r = r->lc;
    }
      else{
          if(r->rc == NULL){
            r->rc = new node(x);
            return;
          }
          r = r->rc;
      }
    }
  }
/*-----------------------------------------------------*/
  void mirrorBT(){
    mirrorBT(root);
  }
/*-----------------------------------------------------*/
  void mirrorBT(node *r){
    if(r == NULL) return;

    if(r->lc == NULL && r->rc == NULL) return;

    else{
      node *t = r->rc;
      r->rc = r->lc;
      r->lc = t;
      mirrorBT(r->lc);
      mirrorBT(r->rc);
    }
  }
/*-----------------------------------------------------*/
  void inorder(struct node *r) {
    if (r == NULL)
      return;

    inorder(r->lc);
    cout << r->data << " ";
    inorder(r->rc);
  }
/*-----------------------------------------------------*/
  void printInorder() {
    inorder(root);
    cout << endl;
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
  tree.insert(18);

  tree.printInorder();

  tree.mirrorBT();

  tree.printInorder();

  return 0;
}
/*
*Inorder Traversal. An inorder traversal first visits the left child (including its entire subtree), then visits the node, and finally visits the right child (including its entire subtree). The binary search tree makes use of this traversal to print all nodes in ascending order of value.
*The inorder function is a recursive function that takes a pointer to a node in the binary tree and prints the values of the nodes in the tree in the inorder traversal. In the inorder traversal, the left subtree is visited first, then the root node is visited, and finally the right subtree is visited. This results in the nodes being printed in non-decreasing order.

*Inorder Traversal. An inorder traversal first visits the left child (including its entire subtree), then visits the node, and finally visits the right child (including its entire subtree). The binary search tree makes use of this traversal to print all nodes in ascending order of value.

*The printInorder function simply calls the inorder function with the root node of the binary tree as an argument and then prints a newline character to move the cursor to the next line. This function effectively prints the values of the nodes in the binary tree in the inorder traversal order.

*In the given C++ program, there are actually two different functions with the name mirrorBT. However, they are two different functions with different parameters and implementations.

*The first mirrorBT function takes a single argument of type node*, which is a pointer to a node in the binary tree. This function is a private member function of the BinaryTree class and is used internally for recursive swapping of the children of each node in the binary tree.

*The second mirrorBT function takes no arguments and is a public member function of the BinaryTree class. This function simply calls the private mirrorBT function with the root node of the binary tree as an argument, so that the entire binary tree is mirrored.

*The reason for having two different functions with the same name is to separate the implementation details of the mirror operation from the public interface of the BinaryTree class. This makes the code more modular and easier to understand, since the user of the class doesn't need to know about the internal workings of the mirror operation, and can simply call the public mirrorBT function to mirror the entire binary tree.
*/
