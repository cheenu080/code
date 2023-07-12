#include <iostream>
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
  void insert(int x) {
    struct node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    if (head == NULL){
      head = newNode;
    }
    else{
      struct node *s = head;
      while (s->next != NULL) {
        s = s->next;
      }
      s->next = newNode;
    }
  }
/*-----------------------------------------------------*/
  void display(){
    struct node *s = head;
    while (s != NULL){
      cout << s->data << " ";
      s = s->next;//traverse to next node
    }
    cout << endl;
  }
/*-----------------------------------------------------*/
  struct node *middleNode(struct node *h){
    if (h == NULL){
      return h;
    }
    struct node *slow = h;
    struct node *fast = h;
    while (fast->next != NULL && fast->next->next != NULL){
      slow = slow->next;
      fast = fast->next->next;
    }
    return slow;
  }
/*-----------------------------------------------------*/
  void mergeSort(){
    head = mergeSort(head);
  }

  struct node *mergeSort(node *h){
    if (h == NULL || h->next == NULL){
      return h;
    }
    struct node *middle = middleNode(h);
    struct node *nextMiddle = middle->next;
    middle->next = NULL;
    struct node *left = mergeSort(h);
    struct node *right = mergeSort(nextMiddle);
    struct node *sortedList = merge(left, right);
    return sortedList;
  }
/*-----------------------------------------------------*/
  struct node *merge(struct node *a, struct node *b) {
    struct node *result = NULL;
    if (a == NULL){
      return b;
    }
    else if (b == NULL){
      return a;
    }
    if (a->data <= b->data){
      result = a;
      result->next = merge(a->next, b);
    }
    else{
      result = b;
      result->next = merge(a, b->next);
    }
    return result;
  }
/*-----------------------------------------------------*/
};

int main(){

  LinkedList list;
  list.insert(5);
  list.insert(2);
  list.insert(7);
  list.insert(3);
  list.insert(9);
  list.insert(11);
  list.display();
  list.mergeSort();
  list.display();
  return 0;
}
