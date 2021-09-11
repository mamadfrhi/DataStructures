#include <stdio.h>

struct Node {
  int value;
  Node* next;
};

int main() {
  // Add first node
  Node* head_node;
  Node* firstNode;
  firstNode->value = 0;
  firstNode->next = NULL;
  head_node = firstNode;

  // insert a node at the end
  Node* newNode = new Node();
  newNode->value = 5;
  newNode->next = NULL;
  
  // find last element
  Node* temp = new Node();
  temp = head_node;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  
  temp->next = newNode;
  
  return 0;
}


