#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

class RLL{
	
	private : 
		struct node *head;		
	public:
		RLL(){
		head = NULL;
    }

/*-----------------------------------------------------*/
		
  void display(){
    struct node *s =head;
    while(s!=NULL){
      cout<< s->data << " ";
      s = s->next;
    }
    cout<<endl;
  }
  
/*-----------------------------------------------------*/
		
  void insert(int x){
    struct node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    
    if(head == NULL){
      head = newNode;
    }
    else{
      struct node  *s = head;
      while(s->next != NULL){
        s =s->next;
      }
      s->next = newNode;
    }
    
  }
		
/*-----------------------------------------------------*/

  void reverseLinkedList(){
    struct node *prev = NULL;
    struct node *s = head;
    struct node *next = NULL;

    while (s != NULL){
      next = s->next;
      s->next = prev;
      prev = s;
      s = next;
    }
    head = prev;
  }	
/*-----------------------------------------------------*/
};

int main(){
  RLL rev;

  rev.insert(5);
  rev.insert(2);
  rev.insert(12);
  rev.insert(3);
  rev.insert(17);
  rev.insert(4);
  rev.insert(8);
  rev.display();

  cout << endl;
	rev.reverseLinkedList();
	rev.display();
}
