/*
 * OrderedLinkedList.h
 *
 *  Created on: Apr 1, 2019
 *      Author: Nicolas
 */

#ifndef ORDEREDLINKEDLIST_H_
#define ORDEREDLINKEDLIST_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct Node Node;
struct Node {
	int val;
	Node* next;
};

Node* newList();
void printList(Node* list);
void insert(Node** listPtr, int value);
int removeElt(Node** listPtr, int valueToRemove); // returns 0 if the valueToRemove was not found, one if it was found and removed

#endif /* ORDEREDLINKEDLIST_H_ */
