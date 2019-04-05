/*
 * OrderedLinkedList.c
 *
 *  Created on: Apr 1, 2019
 *      Author: Nicolas
 */

#include <stdlib.h>
#include <stdio.h>
#include "OrderedLinkedList.h"

Node* newList(){
	return NULL;
}

void printList(Node* list){

	Node* currentNode = list;
	while(currentNode != NULL){
		printf("%d,", currentNode->val);
		fflush(stdout);
		currentNode = currentNode->next;
	}

	printf("NULL\n");
	fflush(stdout);
}

void insert(Node** listPtr, int value){
	Node* newNode = (Node*) malloc(sizeof(Node));
	newNode->val = value;

	Node* currentNode = *listPtr;
	if(currentNode == NULL)
	{
		newNode->next = NULL;
		*listPtr = newNode;
	}
	else if (newNode->val < currentNode->val) // insert at front
	{
		newNode->next = currentNode;
		*listPtr = newNode;
	}
	else
	{
		while(currentNode->next != NULL && currentNode->next->val < newNode->val)
			currentNode = currentNode->next;

		newNode->next = currentNode->next;
		currentNode->next = newNode;
	}

}
