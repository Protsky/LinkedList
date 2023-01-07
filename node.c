#include "node.h"
#include <stdlib.h>
#include <stdio.h>

struct node {
   int value;
   Node *next;
};

Node *createNode()
{
   Node *node = (Node *)malloc(sizeof(Node));
   node->next = NULL;
   node->value = 0;
   return node;
}

void addValue(Node* node, int value){
    node->value = value;
}

void addNextNode(Node* node, Node* nextNode){
  node->next = nextNode;
}

void printList(Node *node){
   printf("My LinkedList: \n ");
   while(node->next != NULL){
      printf("%d ",node->value);
      node = node->next;
   }
   printf("%d",node->value);
   printf("\n");
}


