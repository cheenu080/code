#include <iostream>

using namespace std;

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

class DoublyLinkedList {
  private:
      struct node *head;
  public:
    DoublyLinkedList() {
      head = NULL;
    }
    /*-----------------------------------------------------*/
    void insertDLL(int x) {
      struct node *newNode = new node;
      newNode->data = x;
      newNode->prev = NULL;
      newNode->next = head;

      if (head != NULL) {
          head->prev = newNode;
      }

      head = newNode;
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
    void reverse() {
      struct node *s = head;
      struct node *temp = NULL;

      while (s != NULL) {
          temp = s->prev;
          s->prev = s->next;
          s->next = temp;
          s = s->prev;
      }

      if (temp != NULL) {
          head = temp->prev;
      }
    }
    /*-----------------------------------------------------*/
    void insertBefore(int x, int y) {
      if (head == NULL) {
          return;
      }

      struct node *s = head;
      while (s != NULL) {
        if (s->data == y) {
          struct node *newNode = new node;
          newNode->data = x;
          newNode->prev = s->prev;
          newNode->next = s;
          if (s->prev != NULL) {
              s->prev->next = newNode;
          } else {
              head = newNode;
          }
          s->prev = newNode;
          break;
        }
        s = s->next;
      }
    }
    /*-----------------------------------------------------*/	
};

int main() {
    DoublyLinkedList list;

    list.insertDLL(5);
    list.insertDLL(2);
    list.insertDLL(12);
    list.insertDLL(3);
    list.insertDLL(17);
    list.insertDLL(4);
    list.insertDLL(8);
    list.display();

    cout << endl;
    list.reverse();
    list.display();

    cout << endl;
    list.insertBefore(10, 3);
    list.display();

    return 0;
}
