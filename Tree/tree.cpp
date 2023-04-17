#include <iostream>
using namespace std;
/*lc- left child , rc- right child , r- current*/
struct node {
  struct node *lc;
  int data;
  struct node *rc;
  
  node(int x) {//constructor
    data = x;
    lc = NULL;
    rc = NULL;
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
    struct node *r = root;
    while (true) {
      if (x < r->data) {
        if (r->lc == NULL) {
          r->lc = new node(x);
          return;
        }
        r = r->lc;
      } 
      else {
        if (r->rc == NULL) {
          r->rc = new node(x);
          return;
        }
        r = r->rc;
      }
    }
  }
/*-----------------------------------------------------*/
  struct node* getRoot() {
    return root;
  }
/*-----------------------------------------------------*/
  void getLeftMostNode(node *root) {
    struct node *r = root;
    if (r == NULL) {
      cout << "BTempty " << endl;
      return;
    }

    while (r->lc != NULL) {
      r = r->lc;
    }
    cout << "LeftMostNode " << r->data << endl;
  }
/*-----------------------------------------------------*/
  int countLeafNodes(node *r){
    if(r==NULL) return 0 ;
    
    if(r->lc == NULL && r->rc == NULL) return 1;

    else{
      int a = countLeafNodes(r->lc);
      int b = countLeafNodes(r->rc);
      int c = a+b; //total leaf nodes
      return c;
    }
  }
/*---- StrictBinaryTree -> either 2 children or 0 ---*/
  int SBT(struct node *r){  
    if(r==NULL) return 1 ;

    if(r->lc == NULL && r->rc == NULL) return 1;

    else if(r->lc != NULL && r->rc!= NULL){
      return (SBT(r->lc) && SBT(r->rc));
    }
    else {
      return 0;
    }
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

  node *root = tree.getRoot();
  tree.getLeftMostNode(root);

  int CLN =tree.countLeafNodes(root);
  cout<<"LeafNodes "<<CLN;
  cout<<endl;

  int isSBT = tree.SBT(root);
  cout << "StrictBinaryTree: " << isSBT;
  cout<< endl;

  return 0;
}
//TODO ->read them

/*The while(true) statement is a loop that will continue indefinitely until it is explicitly broken out of using a break statement or a return statement inside the loop body. In the case of this code, the loop is used to traverse the binary tree to find the appropriate position to insert a new node.
The break statement is not used in this code to break out of the while(true) loop. Instead, the return statement is used to exit the function and break out of the loop.*/

/*The reason why the function countLeafNodes is defined with a parameter of node* r instead of without any parameters is that the function needs to be recursive and operate on the binary tree starting from a particular node.

In this case, the starting node is passed as an argument to the function, and the function counts the number of leaf nodes starting from that node.

If the function was defined without any parameters, then it would have to start counting leaf nodes from the root node every time it was called, which would not be efficient. Additionally, if you wanted to count leaf nodes starting from a particular node other than the root, you would not be able to do so.*/
/**
 * !The line r = r->lc; or r = r->rc; is updating the pointer r to the next node in the binary tree.

 * !If x is less than the data at the current node r->data, then the left child node is the next candidate for inserting x, so r is updated to point to the left child node r->lc.

 * !If x is greater than or equal to the data at the current node r->data, then the right child node is the next candidate for inserting x, so r is updated to point to the right child node r->rc.

 * !This process continues until a suitable empty node is found for insertion, at which point the new node is created and added to the tree.
**/
/*If the if statement inside the loop is executed and the return statement is encountered, the function will exit immediately and the loop will not execute any further.

However, if the if statement is not executed, the program will continue with the next line, which is r = r->lc or r = r->rc. These lines assign r to the left child node or right child node of the current node depending on whether the value of x is less than or greater than the current node's value. This ensures that the loop continues until it finds an empty node where the new value can be inserted.
*/