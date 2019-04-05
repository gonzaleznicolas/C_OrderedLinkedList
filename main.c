#include <stdio.h>
#include <stdlib.h>
#include "OrderedLinkedList.h"

int main(void) {

	Node* n1 = newList();
	printList(n1);
	insert(&n1, 8);
	printList(n1);
	insert(&n1, 7);
	printList(n1);
	insert(&n1, 12);
	printList(n1);
	insert(&n1, 9);
	printList(n1);
	insert(&n1, 9);
	printList(n1);
	insert(&n1, 12);
	printList(n1);
	insert(&n1, 7);
	printList(n1);
	removeElt(&n1, 7);
	printList(n1);
	removeElt(&n1, 7);
	printList(n1);
	removeElt(&n1, 9);
	printList(n1);
	removeElt(&n1, 12);
	printList(n1);
	removeElt(&n1, 12);
	printList(n1);
	return EXIT_SUCCESS;
}
