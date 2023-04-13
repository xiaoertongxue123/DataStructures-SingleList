#include"singlelist.h"


int main()
{
	SingleList* head;
	head = creatTailInsert();
	printList(head);

	head = deleteNode(head, 3);

	printList(head);

	return 0;
}
