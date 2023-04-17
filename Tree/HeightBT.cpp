#include <iostream>
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
      } else {
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
  int heightOfBT(node *r){

    if(r==NULL) return 0;
    
    if(r->lc==NULL && r->rc ==NULL) return 0;
    //*if we come in 3rd line or else condition => means a height of 1 is confirmed
    else {
      int L = heightOfBT(r->lc);
      int R = heightOfBT(r->rc);
      int c = max(L,R);
      return c+1;
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

  int height= tree.heightOfBT(root);
  cout<<"height "<<height;
  cout<<endl;

  return 0;
}