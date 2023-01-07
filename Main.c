#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "node.h"


int main(int argc, char *argv[]){
    
    Node *first = createNode();
    addValue(first,5);
    
    Node *second = createNode();
    addValue(second,2); 

    addNextNode(first,second);

    Node *third = createNode();
    addValue(third,1); 

    addNextNode(second,third);

    Node *four = createNode();
    addValue(four,1); 

    addNextNode(third,four);  

    printList(first);


    //Second list

    Node *wow = createNode();
    addValue(wow,5);
    Node *wowTwo = createNode();
    addValue(wowTwo,3);
    addNextNode(wow,wowTwo);
    printList(wow);

}
