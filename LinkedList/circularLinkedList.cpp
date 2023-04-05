#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};

class CircularLinkedList {
  private:
    struct node *head;
  public:
    CircularLinkedList() {
      head = NULL;
    }
    /*-----------------------------------------------------*/
    void insertCLL(int x) {
      struct node *newNode = new node;
      newNode->data = x;
      newNode->next = NULL;
      
      if (head == NULL) {
      head = newNode;
      newNode->next = newNode;
      } 
      else {
      struct node *s = head;
      while (s->next != head){
        s = s->next;
      }
      s->next = newNode;
      newNode->next = head;
      }
    }
    /*-----------------------------------------------------*/
    void display() {
      if (head == NULL) {
      return;
      }
      
      struct node *s = head;
      do {
      cout << s->data << " ";
      s = s->next;
      } while (s != head);
      
      cout << endl;
	}
	/*This modified display() method will iterate over the linked list
	printing the data of each node, until it reaches 
	the head node again, thereby avoiding an infinite loop.*/
    /*-----------------------------------------------------*/
	void DeleteLastNode(){
		if (head == NULL) {
			return;
		}

		struct node *s = head;
		struct node *q = NULL;

		while (s->next != head) {
			q = s;
			s = s->next;
		}

		if (q == NULL) {
			head = NULL;
		} 
		else {
			q->next = head;
		}
		delete s;
	}

    /*-----------------------------------------------------*/	
};

int main(){
  CircularLinkedList circle;

  circle.insertCLL(5);
  circle.insertCLL(2);
  circle.insertCLL(12);
  circle.insertCLL(3);
  circle.insertCLL(17);
  circle.insertCLL(4);
  circle.insertCLL(8);
  circle.display();

  cout << endl;
  circle.DeleteLastNode();
  circle.display();
  
  return 0;
}
