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

	while(list != NULL){
		printf("%d,", list->val);
		fflush(stdout);
		list = list->next;
	}

	printf("NULL\n");
	fflush(stdout);
}

void insert(Node** listPtr, int value){
	if(*listPtr == NULL)
	{
		Node* newNode = (Node*) malloc(sizeof(Node));
		newNode->val = value;
		newNode->next = NULL;
		*listPtr = newNode;
	}
}
