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
      struct node *newNode = new node; // newNode(S) is a pointer to a node of type struct node
      newNode->data = value;          //(*newNode).data = value;
      newNode->next = NULL;           //(*newNode).next = NULL;
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
        // If the linked list is empty, make the new node the head node
        head = newNode;
        return;
      }
      
      struct node *s = head;
      while (s->next != NULL){ // if linked list has atleast one node 
        s = s->next;            // asking everyone if its the last node
      }//after this while loop we are ate last node
      s->next = newNode;
    }
/*-----------------------------------------------------*/
  void addXbeforeY(int x, int y) {
    struct node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL) {// If the linked list is empty, make the new node the head node
      head = newNode;
      return;
    }
    /*Check if the head node of the linked list has the value y. If so, insert newNode before the head node by setting its next field to the current head node, and making newNode the new head of the linked list.*/
    if (head->data == y) {
      newNode->next = head;
      head = newNode;
      return;
    }
    /*Traverse the linked list by iterating over each node using a pointer s starting from the head node. Stop when either the end of the linked list is reached (i.e., s->next is NULL) or when the value of the next node (s->next->data) equals y.*/
    struct node *s = head;
    //the condition s->next->data != y checks if the data value in the node next to s is not equal to y
    while (s->next != NULL && s->next->data != y) {
      s = s->next;
    }

    if (s->next == NULL) {
      // If the node with the value y is not found, do not add the new node
      return;
    }

    // Otherwise, insert the new node before the node with the value y
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
  /*if(s->data == x){
      if(p==NULL){
        head = s->next;
  }*/

/*-----------------------------------------------------*/
  void MoveLastNodeToFront(){
    struct node *s = head;
    struct node *s1 ;
    struct node *prev;
    s1 = s;
    while(s1->next!=NULL){
      prev = s1;
      s1 = s1->next;//now it has reached last node
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
    /*-----------*/
    list.insert(42);
    list.insert(12);
    list.insert(31);
    list.insert(9);
    list.insert(5);
    list.insert(16);
    list.display();
    cout<<endl;
    /*-----------*/
    list.addXatend(100);
    list.display();
    cout << endl;
    /*-----------*/
    list.addXbeforeY(99,100);
    list.display();
    cout << endl;
    /*-----------*/
    list.deleteX(31);
    list.display();
    cout << endl;
    /*-----------*/
    list.MoveLastNodeToFront();
    list.display();
    cout << endl;
    /*-----------*/
    int ans = list.KthNodeFromLast(5);
    cout<<ans;
    cout << endl;
    /*-----------*/
    cout << endl;
    int middle = list.middleNode();
    cout << "Middle node: " << middle << endl;

    return 0;
}
/*In the given code, head is a private data member of the LinkedList class, which is a pointer to the first node of the linked list. Initially, head is set to NULL in the constructor of the LinkedList class, indicating that the linked list is empty.

When a new node is inserted into the linked list using the insert method, a new node is created with the specified value and its next pointer is set to NULL. If the linked list is empty, the new node becomes the first node of the linked list, and head is set to point to this new node. Otherwise, the new node is added to the end of the linked list, by traversing the linked list until the last node is reached and setting its next pointer to the new node.

*/
/*In the given code, head and s are pointers of type struct node. head is a private data member of the LinkedList class, which points to the first node of the linked list. Initially, head is set to NULL in the constructor of the LinkedList class, indicating that the linked list is empty.

s is a temporary pointer that is used for traversing the linked list. It is initialized to point to head, and then iteratively moved to the next node in the linked list until the desired node is reached.*/