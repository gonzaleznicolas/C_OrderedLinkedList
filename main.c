#include <stdio.h>
#include <stdlib.h>
#include "OrderedLinkedList.h"

int main(void) {

	Node* n1 = newList();
	printList(n1);
	insert(&n1, 8);
	printList(n1);

	return EXIT_SUCCESS;
}
