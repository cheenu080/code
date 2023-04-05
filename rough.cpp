#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
  int data;
  struct node *next;
};

class MergeSort
{
private:
  struct node *head;

public:
  MergeSort()
  {
    head = NULL;
  }
  /*-----------------------------------------------------*/
  void insert(int x)
  {
    struct node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL)
    {
      head = newNode;
    }
    else
    {
      struct node *s = head;
      while (s->next != NULL)
      {
        s = s->next;
      }
      s->next = newNode;
    }
  }
  /*-----------------------------------------------------*/
  void display()
  {
    if (head == NULL)
    {
      cout << "Linked list is empty" << endl;
      return;
    }

    struct node *s = head;
    while (s != NULL)
    {
      cout << s->data << " ";
      s = s->next;
    }
    cout << endl;
  }

  /*-----------------------------------------------------*/
  struct node *middleNode(struct node *startNode)
  {
    struct node *s = startNode;
    struct node *s1 = startNode;

    while (s1 != NULL && s1->next != NULL)
    {
      s1 = s1->next->next;
      s = s->next;
    }
    return s;
  }
  /*-----------------------------------------------------*/
  struct node *merge(struct node *left, struct node *right)
  {
    if (left == NULL)
      return right;
    if (right == NULL)
      return left;
    struct node *mergedList;
    if (left->data <= right->data)
    {
      mergedList = left;
      mergedList->next = merge(left->next, right);
    }
    else
    {
      mergedList = right;
      mergedList->next = merge(left, right->next);
    }
    return mergedList;
  }
  /*-----------------------------------------------------*/
  struct node *mergeSort(struct node *startNode)
  {
    struct node *midNode;
    struct node *start = startNode;
    if (start == NULL || start->next == NULL)
    {
      return start;
    }
    midNode = middleNode(start);
    struct node *nextMid = midNode->next;
    midNode->next = NULL;
    struct node *leftList = mergeSort(start);
    struct node *rightList = mergeSort(nextMid);
    return merge(leftList, rightList);
  }
  /*-----------------------------------------------------*/
  void sortList()
  {
    head = mergeSort(head);
  }
  /*-----------------------------------------------------*/
};

int main()
{
  MergeSort ms;

  ms.insert(5);
  ms.insert(2);
  ms.insert(12);
  ms.insert(3);
  ms.insert(17);
  ms.insert(4);
  ms.insert(18);
  ms.display();

  cout << endl;
  ms.sortList();
  ms.display();

  return 0;
}
