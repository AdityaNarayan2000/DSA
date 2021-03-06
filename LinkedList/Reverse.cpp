#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node(int val)
  {
    data = val;
    next = NULL;
  }
};

void InsterAtHead(node *&head, int val)
{
  node *n = new node(val);
  n->next = head;
  head = n;
}
void InsterAtTail(node *&head, int val)
{
  node *n = new node(val);

  if (head == NULL)
  {
    head = n;
    return;
  }

  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void display(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
bool search(node *head, int key)
{
  node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == key)
    {
      return true;
    }
    temp = temp->next;
  }
  return false;
}
void deleteAtHead (node* &head){
  
  node* toDelete = head;
  head = head->next;
  
  delete toDelete;
}

void deletion (node* &head, int val){

  if (head==NULL)
  {
    return;
  }
  
  if (head->next==NULL)
  {
    deleteAtHead(head);
    return;
  }

  node* temp = head;
  while (temp->next->data!=val)
  {
    temp = temp->next;
  }
  node* toDelete = temp->next;
  temp->next = temp->next->next;
  
  delete toDelete;
}

node* reverse(node* &head){
  //Iterative Way
  node* previousPtr = NULL;
  node* currentPtr = head;
  node* nextPtr;

  while (currentPtr!=NULL)
  {
    nextPtr=currentPtr->next;
    currentPtr->next = previousPtr;

    previousPtr = currentPtr;
    currentPtr = nextPtr;
  }
  return previousPtr;
}

node* reverseRecursive(node* &head){
  //Recursive Way
  if (head == NULL || head -> next == NULL)
  {
    return head;
  }
  node* newHead = reverseRecursive(head->next);
  head->next->next = head;
  head->next = NULL;
  return newHead;
}

int main()
{

  node *head = NULL;
  InsterAtTail(head, 1);
  InsterAtTail(head, 2);
  InsterAtTail(head, 3);
  InsterAtTail(head, 5);
  InsterAtTail(head, 6);
  InsterAtTail(head, 7);
  display(head);
  InsterAtHead(head, 4);
  display(head);
  cout << search(head, 5) << endl;
  cout << search(head, 3) << endl;
  deletion(head,3);
  display(head);
  deleteAtHead(head);
  display(head);

  // node* newHead = reverse(head);
  node* newHead = reverseRecursive(head);
  display(newHead);

  return 0;
}