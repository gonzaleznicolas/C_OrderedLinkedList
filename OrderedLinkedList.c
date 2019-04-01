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
	}
	printf("NULL\n");
}

void insert(Node** listPtr, int value){

}
