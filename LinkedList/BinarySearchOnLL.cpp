#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class BinarySearch{
  private:
    struct node *head;
  public:
    BinarySearch(){
      head = NULL;
    }
/*-----------------------------------------------------*/
  void insert(int x){
    struct node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;

    if(head==NULL){
      head=newNode;
    }
    else{
      struct node *s = head;
      while (s->next != NULL){
          s = s->next;
      }
      s->next = newNode;
    }
  }
/*-----------------------------------------------------*/
  void display(){
    struct node *s =head;
    while(s!= NULL){
        cout<< s->data << " ";
        s=s->next;
    }
    cout<<endl;
  }
/*-----------------------------------------------------*/
  int middleNode(){
    struct node *s  = head;
    struct node *s1 = head;

    while(s1 != NULL && s1->next != NULL){
        s1 = s1->next->next;
        s = s->next;
    }
    return(s->data);
  }
/*-----------------------------------------------------*/
  int BS(int x){
    struct node *s =head;
    struct node *p;
    struct node *prev = NULL;

    while(s != NULL){
      p = s;
      int mid = middleNode();

      if(mid == x) return mid;

      else if(x > mid){
        s = s->next; //same as (mid+1)
      }
      else {
        p->next = NULL; //as p is middle now we cut the linked list
        s = prev; // reset s to the previous node
      }
      prev = p;
    }
    return prev->data;
  }
/*-----------------------------------------------------*/
};

int main(){
  BinarySearch bin;

  bin.insert(5);
  bin.insert(2);
  bin.insert(12);
  bin.insert(3);
  bin.insert(17);
  bin.insert(4);
  bin.insert(8);
  bin.display();

  cout << endl;
  int answer = bin.BS(5);
  cout << answer << endl;
}
