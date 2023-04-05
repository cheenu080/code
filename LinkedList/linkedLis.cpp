#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};

class LinkedList {
  private:
      struct node *head;
  public:
    LinkedList() {
      head = NULL;
    }
/*-----------------------------------------------------*/
    void insert(int value) {
      struct node *newNode = new node;
      newNode->data = value;
      newNode->next = NULL;
      if (head == NULL) {
        head = newNode;
      }
      else {
        struct node *s = head;
        while (s->next != NULL) {
          s = s->next;
        }
        s->next = newNode;
      }
    }
/*-----------------------------------------------------*/
    void display() {
      struct node *s = head;
      while (s != NULL) {
        cout << s->data << " ";
        s = s->next;
      }
      cout << endl;
    }
/*-----------------------------------------------------*/
    void addXatend(int x){
      struct node *newNode = new node;
      newNode->data = x;
      newNode->next = NULL;
      
      if (head == NULL){
        head = newNode;
        return;
      }
      
      struct node *s = head;
      while (s->next != NULL){ 
        s = s->next;            
      }
      s->next = newNode;
    }
/*-----------------------------------------------------*/
    void addXbeforeY(int x, int y) {
      struct node *newNode = new node;
      newNode->data = x;
      newNode->next = NULL;

      if (head == NULL) {
        head = newNode;
        return;
      }

      if (head->data == y) {
        newNode->next = head;
        head = newNode;
        return;
      }

      struct node *s = head;
      while (s->next != NULL && s->next->data != y) {
        s = s->next;
      }

      if (s->next == NULL) {
        return;
      }

      newNode->next = s->next;
      s->next = newNode;
    }
/*-----------------------------------------------------*/
    void deleteX(int x){
      struct node *p = NULL;
      struct node *s = head;
      while(s->data!=x && s->next!=NULL){
        p=s;
        s=s->next;
      }
      if(s->data == x){
        p->next = s->next;
        free(s);
        s=NULL;
      }
    }
/*-----------------------------------------------------*/
    void MoveLastNodeToFront(){
      struct node *s = head;
      struct node *s1 ;
      struct node *prev;
      s1 = s;
      while(s1->next!=NULL){
        prev = s1;
        s1 = s1->next;
      }
      prev->next=NULL;
      s1->next = s;
      head=s1;
    }
/*-----------------------------------------------------*/
    int KthNodeFromLast(int k){
      struct node *s = head;
      struct node *s1;
      int i = 1;
      s1 = s;
      
      while(s->next!=NULL && i<k){
        i = i+1;
        s1 = s1->next;
      }
      while(s1->next!=NULL){
        s = s->next;
        s1 = s1->next;
      }
      return(s->data);
  }
/*-----------------------------------------------------*/
  int middleNode() {
    struct node *s = head;
    struct node *s1 = head;

    while (s1 != NULL && s1->next != NULL) {
        s1 = s1->next->next;
        s = s->next;
    }
    return(s->data);
  }

/*-----------------------------------------------------*/

};

int main() {
    LinkedList list;

    list.insert(42);
    list.insert(12);
    list.insert(31);
    list.insert(9);
    list.insert(5);
    list.insert(16);
    list.display();
    cout<<endl;

    list.addXatend(100);
    list.display();
    cout << endl;

    list.addXbeforeY(99,100);
    list.display();
    cout << endl;

    list.deleteX(31);
    list.display();
    cout << endl;

    list.MoveLastNodeToFront();
    list.display();
    cout << endl;

    int ans =list.KthNodeFromLast(3);
    cout<<ans;
    cout << endl;

    cout<<endl;
    int middle = list.middleNode();
    cout << "Middle node: " << middle << endl;

    return 0;
}