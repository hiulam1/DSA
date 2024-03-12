#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
}

node* createNode(int data)
{
  node* newNode = malloc(sizeof(node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void pushNode(node** head, int data)
{
  node* newNode = createNode(data);
  newNode->next = *head;
  *head = newNode;
}


void appendNode(node** head, int data)
{
  // create node
  node* newNode = createNode(data);
  // if list is empty, point head to new node
  if (*head == NULL)
  {
    *head = newNode;
    return;
  }

  // find last node
  // create a pointer that contains the address of the head
  node* pointer = *head;
  while (pointer->next != NULL)
  {
    // the pointer traverses through the list
    *pointer = pointer->next;
  }
  // appends the node
  pointer->next = newNode;

}

void insertNodeAtPosition(node** head, int position, int data)
{
  // insert at head if list is empty
  if (*head == NULL || position == 0 )
  {
    pushNode(head, data);
    return;
  }
  node* newNode = createNode(data);
  // traverse node to find position (starts at 0)
  int count = 0;
  // create a pointer to count the number of nodes traversed
  node* pointer = *head;


  // traverse node to find the node
  while (count < position - 1 && pointer != NULL) {
    pointer = pointer->next;
    count++;
  }

  // if position is beyond list, do not append
  if (pointer == NULL && count < position - 1) {
    free(newNode);
    return;
  }
  // insert node
  newNode->next = pointer->next;
  pointer->next = newNode;
}

void insertNodeAfterPrev(node *prev)
{

}

bool searchNode(node* head, int data)
{

}

int searchNodeAtPosition(node* head, int position)
{

}

int findLength(node* head)
{

}

void reverseList(node* head)
{

}

void deleteNode(node* head, int data)
{

}

void deleteNodeAtPosition(node* head, int position)
{

}

void deleteList(node* head)
{

}

void printList(node* head)
{

}

int main
{

}
