#include "lib/list.h"
#include <window.h>
int main()
{
	node_t* head;
	begin_push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	begin_push(&head,1);
	print_list(head);
	return 0;
}
