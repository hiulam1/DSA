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

void pushNode(node* head, int data)
{
  node* head = createNode(data);

}


void appendNode(node* tail, int data)
{
  node* head = createNode(data);

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
int main
{

}
