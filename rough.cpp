#include <bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *next;
};

class LinkedList{

  private:
    struct node *head;
  public:
  LinkedList(){
    head = NULL;
  }
 
  /*-----------------------------------------------------*/
  void insert(int value){
    struct node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
      head = newNode;
    }
    else{
      struct node *s = head;
      while(s->next !=NULL){
        s =s->next;
      }
      s->next =newNode;
    }
  }
  /*-----------------------------------------------------*/
  void display(){
    struct node *s =head;
    while(s != NULL){
      cout<<s->data<<" ";
      s=s->next;
    }
    cout<<endl;
  }
  /*-----------------------------------------------------*/
  void addXatend(int x){
      struct node *s = new node; 
      struct node *p = new node;
      if (s==NULL){
        s = p;
      }
      while(s->next != NULL){
        s= s->next;
      }
      s=s->next;
    }
    /*-----------------------------------------------------*/
};
int main(){
  LinkedList list;
  list.insert(5);
  list.insert(4);
  list.insert(11);
  list.insert(24);
  list.insert(5);
  list.insert(8);
  list.display();
  cout<<endl;
  list.addXatend(99);
  list.display();

  return 0;
}
