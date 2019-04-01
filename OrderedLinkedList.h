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

#endif /* ORDEREDLINKEDLIST_H_ */
