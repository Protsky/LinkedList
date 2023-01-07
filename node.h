#ifndef __NODE__
#define __NODE__


typedef struct node Node;

Node *createNode();
void addValue(Node *, int value);
void addNextNode(Node*, Node*);
void printList(Node *);

#endif